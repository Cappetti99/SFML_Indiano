//
// Created by lorenzo on 12/02/22.
//

#include "Game.h"

void Game::initVariables()
{
    this->window = nullptr;
}

void Game::initWindows()
{
    this->videoMode.height = 600;
    this->videoMode.width = 800;
    this->window = new sf::RenderWindow (this->videoMode, "Indiano", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game()
{
    this->initVariables();
    this->initWindows();
}

Game::~Game()
{
delete this->window;
}

//Accessors

const bool Game::running() const  //getWindowsIsOpen
{
    return this->window->isOpen();
}

//Function
void Game::pollEvents() {
    while (this->window->pollEvent(this->ev)) {
        switch (this->ev.type) {
            case sf::Event::Closed:
                this->window->close();
                break;
            case sf::Event::KeyPressed:
                if (this->ev.key.code == sf::Keyboard::Escape)
                    this->window->close();
                break;
        }
    }
}

    void Game::render()
    {
        this->window->clear(sf::Color(255, 0, 0, 255));

        //draw game object

        this->window->display();
    }

    void Game::update()
    {
        this->pollEvents();
    }
