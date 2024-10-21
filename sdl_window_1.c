/*********TO RUN*********/

//clang -std=c99 -Wall -O0 -g -Iinclude -L/opt/homebrew/lib -lSDL2 src/sdl_window_1.c -o build/debug/play

#include <stdlib.h>
#include <SDL2/SDL.h>
#include <stdbool.h>


int main(void)
{
    //don't know what this does exactly
    SDL_Window      *win = NULL;
    SDL_Renderer    *ren = NULL;

    SDL_Init(SDL_INIT_EVERYTHING); //no clue
    SDL_CreateWindowAndRenderer(720, 720, 0, &win, &ren); //window parameters
    //SDL_CreateWindow("Hello SDL WORLD", 720, 720, 0, &win, &ren);


        //colored window stuff
        SDL_SetRenderDrawColor(ren, 255, 255, 0, 255); //color wanted
        SDL_RenderClear(ren);  //will clear it?
        SDL_RenderPresent(ren); //sets it as present?
    
    bool quit = false; //used for event loop

            //Event handler
            SDL_Event e; //cool event handler
                
           


            //While application is running
            while( !quit )
            {
                //Handle events on queue
                while( SDL_PollEvent( &e ) != 0 ) // poll for event
                {
                    //User requests quit
                    if( e.type == SDL_QUIT ) // unless player manually quits
                    {
                        quit = true;
                    }


                   
                   if (e.type == SDL_KEYDOWN) {
                      if (e.key.keysym.sym == SDLK_ESCAPE) {
                          quit = true; // Exit on pressing the escape key
                      }
                    }
                   
                  
                }
            }


    //This stuff will destroy and end the program appropriatly
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();

    return (0);
}
