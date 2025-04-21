#pragma once
 
#include "core/application.h"
#include "core/logger.h"
#include "game_types.h"

// Externally-defined function to create a game.
extern b8 create_game(game* out_game);

/**
* The main entry point of the application.
*/
int main(void) {
    // Application configuration.

    // Request the game instance from the application.
    game game_inst;
    if (!create_game(&game_inst)) {
        KFATAL("Could not create game!");
        return -1;
    }

    // Ensure the function pointers exist.
    if (!game_inst.render || !game_inst.update || !game_inst.initialize || !game_inst.on_resize) {
        KFATAL("The game's function pointers must be assigned!");
        return -2;
    }
    
    
    application_create(&config);
 
    application_run();

    application_config config; 
    config.start_pos_x = 100;
    config.start_pos_y = 100;
    config.start_width = 1200;
    config.start_height = 720;
    config.name = "henlo henlo hai";


    return 0;
}