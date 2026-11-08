
#include <SDL.h>
#include <SDL_main.h>

int main(int argc, char* argv[]) {

    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO) != 0) {
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow(
        "Battle Realms Android",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        1280,
        720,
        SDL_WINDOW_SHOWN
    );

    if (!window) {
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* renderer =
        SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    if (renderer) {
        SDL_SetRenderDrawColor(renderer, 20, 30, 20, 255);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
        SDL_DestroyRenderer(renderer);
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
