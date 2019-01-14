#include <SFML/Graphics.hpp>

int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode(800, 600), "My window");


    sf::Font font;
    if (!font.loadFromFile("res/Orbitron-Bold.ttf"))
    {
        // error...
    }


    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color::Black);

        // draw everything here...
        // window.draw(...);

        {

            sf::Text text;

            // select the font
            text.setFont(font); // font is a sf::Font

            // set the string to display
            text.setString("Hello world");

            // set the character size
            text.setCharacterSize(24); // in pixels, not points!

            // set the color
            text.setFillColor(sf::Color::Red);

            // set the text style
            text.setStyle(sf::Text::Bold | sf::Text::Underlined);

            // inside the main loop, between window.clear() and window.display()
            window.draw(text);

        }

        // end the current frame
        window.display();
    }

    return 0;
}