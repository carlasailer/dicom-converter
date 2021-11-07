#ifndef RENDERER_H
#define RENDERER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
//#include <SDL2/SDL_image.h>
#include <string>
#include <vector>

class Renderer 
{
 public:
    //Renderer();
    Renderer(const std::size_t screen_width, const std::size_t screen_height,
             const std::size_t grid_width, const std::size_t grid_height);
    ~Renderer();

    void Render(const void* image, int width, int height);
    void RenderText(std::vector<std::string> text);
    void Save(std::string file_ext, std::string folder);

 private:
    SDL_Window *sdl_window;
    SDL_Renderer *sdl_renderer;
    SDL_Surface *sdl_winSurface;
    SDL_Texture *sdl_texture;
    TTF_Font *font;

    const std::size_t screen_width;
    const std::size_t screen_height;
    const std::size_t grid_width;
    const std::size_t grid_height;



};

#endif