#include "renderer.h"

#include <iostream>
#include <chrono>
#include <time.h>

std::string convertTimestampToString(time_t rawtime)
{
    std::string time_s;
    char buffer [80];
    struct tm * timeinfo;

    timeinfo = std::localtime(&rawtime);
    strftime(buffer, 80, "%F_%T", timeinfo);
   
    time_s = std::string(buffer);

    return time_s;

}

std::string getFilenameWithTimestamp(std::string file_ext, std::string location)
{   
    
    std::string filename = "";
         
    auto timestamp = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    std::string timestring = convertTimestampToString(timestamp);
    std::cout << timestring << std::endl;

    filename = location + "/" + timestring + "." + file_ext;
    std::cout << filename << std::endl;

    return filename;
}

Renderer::Renderer(const std::size_t screen_width,
                   const std::size_t screen_height,
                   const std::size_t grid_width, const std::size_t grid_height)
    : screen_width(screen_width),
      screen_height(screen_height),
      grid_width(grid_width),
      grid_height(grid_height) 
{

  // Initialize SDL
  if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
    std::cerr << "SDL could not initialize.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  // Initialize SDL_ttf
  if (TTF_Init() < 0) {
    std::cerr << "Error initializing SDL_ttf: " << TTF_GetError() << "\n";
  }

  // Create Window
  sdl_window = SDL_CreateWindow("Dicom Converter", SDL_WINDOWPOS_CENTERED,
                                SDL_WINDOWPOS_CENTERED, screen_width,
                                screen_height, SDL_WINDOW_SHOWN);

  if (nullptr == sdl_window) {
    std::cerr << "Window could not be created.\n";
    std::cerr << " SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create renderer
  sdl_renderer = SDL_CreateRenderer(sdl_window, -1, SDL_RENDERER_ACCELERATED);
  if (nullptr == sdl_renderer) {
    std::cerr << "Renderer could not be created.\n";
    std::cerr << "SDL_Error: " << SDL_GetError() << "\n";
  }

  // Create texture
  //sdl_texture = NULL;

}

Renderer::~Renderer() {
  // close the window and perform a clean exit of SDL
  //SDL_FreeSurface();
  // = NULL;
 
  SDL_DestroyRenderer(sdl_renderer);
  sdl_renderer = NULL;
  
  //SDL_DestroyTexture();
  //sdl_texture = NULL;

  SDL_DestroyWindow(sdl_window);
  sdl_window = NULL;

  SDL_Quit();
  TTF_Quit();
}

void Renderer::Render(const void* pixels, int width, int height) {
  
  SDL_Rect block;
  block.w = screen_width / grid_width;
  block.h = screen_height / grid_height;

  // clear screen
  //SDL_SetRenderDrawColor(sdl_renderer, 0x64, 0x95, 0xED, 0xFF);
  SDL_SetRenderDrawColor(sdl_renderer, 0x1E, 0x1E, 0x1E, 0xFF);
  SDL_RenderClear(sdl_renderer);
  //SDL_Surface* surface;

  // Render food
  SDL_SetRenderDrawColor(sdl_renderer, 0xFF, 0xCC, 0x00, 0xFF);
  block.x = 2 * block.w;
  block.y = 2 * block.h;
  SDL_RenderFillRect(sdl_renderer, &block);
  std::cout << "Before surface" << std::endl;
   //DL_Surface *sdl_imageSurface = SDL_CreateRGBSurface(0, width, height, 8, NULL, NULL, NULL, NULL);
  /*Uint32 rmask, gmask, bmask, amask;
  rmask = 0x000000ff;
  gmask = 0x0000ff00;
  bmask = 0x00ff0000;
  amask = 0xff000000;
  */
  /*SDL_Surface *sdl_imageSurface = SDL_CreateRGBSurfaceFrom(const_cast<void * >(pixels), width, height, 8, 3*width, NULL, NULL, NULL, NULL);
  if (sdl_imageSurface == NULL)
  {
    std::cout << "CreateRGBSurface failed: " << SDL_GetError() << std::endl;
  }
  SDL_Color colors[256];
  int i;
  for(i = 0; i < 256; i++)
  {
    colors[i].r = colors[i].g = colors[i].b = i;
  }
  SDL_SetPaletteColors((sdl_imageSurface->format)->palette, colors, 0, 256);

  //std::cout << "Surface is there! " << std::endl;

  SDL_Texture *sdl_texture = SDL_CreateTextureFromSurface(sdl_renderer, sdl_imageSurface);
  if (sdl_texture == NULL)
  {
    std::cout << "Create Texture failed: " << SDL_GetError() << std::endl;
  }

  SDL_FreeSurface(sdl_imageSurface);
  sdl_imageSurface = NULL;

  SDL_SetRenderTarget(sdl_renderer, sdl_texture);
  SDL_RenderCopy(sdl_renderer, sdl_texture, NULL, NULL);
   */
  // update what is seen
  //SDL_RenderClear(sdl_renderer);

  // render text
  /*font = TTF_OpenFont("/home/workspace/dicom-converter/utils/arial.ttf", 20);
  
  if (!font) {
    std::cerr << "TTF_OpenFont failed: " << TTF_GetError();
  }
  
  SDL_Surface* surface_text;
  SDL_Color color = {255, 0, 0};

  surface_text = TTF_RenderText_Solid(font, "Hello World!", color);
  if (!surface_text) {
    std::cerr << "Failed to render text: " << TTF_GetError() << std::endl;
  }

  SDL_Texture* texture_text;
  texture_text = SDL_CreateTextureFromSurface(sdl_renderer, surface_text);
  SDL_Rect dest = {0, 0, surface_text->w, surface_text->h};
  SDL_RenderCopy(sdl_renderer, texture_text, NULL, &dest);

  TTF_CloseFont(font);
  SDL_DestroyTexture(texture_text);
  SDL_FreeSurface(surface_text);

  SDL_RenderPresent(sdl_renderer);
*/
return;

}

void Renderer::RenderText(std::vector<std::string> text)
{
  SDL_Surface* surface_text;
  SDL_Color color = {255, 255, 255};
  SDL_Texture* texture_text;
  

  font = TTF_OpenFont("/home/workspace/dicom-converter/utils/arial.ttf", 13);
  if (!font) {
    std::cerr << "TTF_OpenFont failed: " << TTF_GetError();
  }
  
  for (int i = 0; i < text.size(); i++) 
  {
    surface_text = TTF_RenderText_Solid(font, text[i].c_str(), color);
    if (!surface_text) {
      std::cerr << "Failed to render text: " << TTF_GetError() << std::endl;
    }

    SDL_Rect dest = {0, 15*i, surface_text->w, surface_text->h};
    texture_text = SDL_CreateTextureFromSurface(sdl_renderer, surface_text);
    SDL_RenderCopy(sdl_renderer, texture_text, NULL, &dest);
    SDL_DestroyTexture(texture_text);
    SDL_FreeSurface(surface_text);
    SDL_RenderPresent(sdl_renderer);
  }

  TTF_CloseFont(font);
  
  //SDL_RenderPresent(sdl_renderer);

  return;
}

void Renderer::Save(std::string file_ext, std::string folder)
{
  std::string filename = getFilenameWithTimestamp(file_ext, folder);
  sdl_winSurface = SDL_GetWindowSurface(sdl_window);
  SDL_RenderReadPixels(sdl_renderer, NULL, SDL_PIXELFORMAT_ARGB8888, sdl_winSurface->pixels, sdl_winSurface->pitch);
  SDL_SaveBMP(sdl_winSurface, filename.c_str());
  return;
}