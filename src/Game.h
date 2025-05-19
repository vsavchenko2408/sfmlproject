#include <SFML/Graphics.hpp>

class Game
{
public:
    Game() = default;
    ~Game() = default;

    void run()
    {
        sf::RenderWindow window(sf::VideoMode({200, 200}), "Game");
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);

        while (window.isOpen())
        {
            while (const std::optional event = window.pollEvent())
            {
                if (event->is<sf::Event::Closed>())
                    window.close();
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape))
                    window.close();
            }

            window.clear();
            window.draw(shape);
            window.display();
        }
    }
};