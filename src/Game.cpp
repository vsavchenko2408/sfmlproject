#ifndef GAME_H
#define GAME_H
#include "Game.h"
#include <SFML/Graphics.hpp>
void Game::run()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Game");
    sf::CircleShape shape(20.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
                shape.move(sf::Vector2f(-5.f, 0.f));
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
                shape.move(sf::Vector2f(5.f, 0.f));
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
                shape.move(sf::Vector2f(0.f, -5.f));
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
                shape.move(sf::Vector2f(0.f, 5.f));
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
}

#endif