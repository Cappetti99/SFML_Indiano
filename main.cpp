#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "Game.h"

//using namespace sf

int main()
{
    //Init Game engine
    Game game;

   //Game loop
    while (game.running())
    {
        //Update
        game.update();
        //Render
        game.render();
    }

    //End of application
    return 0;
}
