//
// Created by lorenzo on 12/02/22.
//
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#ifndef SFML_INDIANO_GAME_H
#define SFML_INDIANO_GAME_H


class Game {

private:
    //Variabiles
    //Windows
    sf::RenderWindow* window;
    sf::VideoMode videoMode;
    sf::Event ev;
    void initVariables();
    void initWindows();

public:
    // Costructor & Distructor
    Game();
virtual ~Game();


//Accessors
const bool running() const;

//Function
void pollEvents();
void update();
void render();

};


#endif //SFML_INDIANO_GAME_H
