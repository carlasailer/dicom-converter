#ifndef RENDERER_H
#define RENDERER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>
#include <string>
#include <vector>

class Renderer 
{
 public:
    // constructors
    Renderer();
    Renderer(const std::size_t screen_width, const std::size_t screen_height,
             const std::size_t grid_width, const std::size_t grid_height);
   // destructor
    ~Renderer();
   // copy constructor
    Renderer(const Renderer &source);
   // copy assignment operator
    Renderer &operator=(const Renderer &source);
   // move constructor
    Renderer(Renderer &&source);
   // move assignment operator
    Renderer &operator=(Renderer &&source);

    void Render(const void* image, int width, int height);
    void RenderText(std::vector<std::string> text);
    void Save(std::string file_ext, std::string folder);

    SDL_Window *sdl_window;
    SDL_Surface *sdl_icon;
    SDL_Surface *sdl_winSurface;
    SDL_Renderer *sdl_renderer;
    SDL_Texture *sdl_texture;
    TTF_Font *font;

    const std::string icon_path{"../utils/icon.png"};

    std::size_t screen_width;
    std::size_t screen_height;
    std::size_t grid_width;
    std::size_t grid_height;

};

#endif