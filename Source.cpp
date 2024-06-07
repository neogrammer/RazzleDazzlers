#include <SFML/Graphics.hpp>

#define NOMINMAX


int main()
{
	sf::RenderWindow wnd(sf::VideoMode(1024U, 576U, 32U), "Razzle Dazzlers");
	wnd.setPosition({ 60U, 45U });
	while (wnd.isOpen())
	{
		sf::Event e;
		while (wnd.pollEvent(e))
		{
			switch (e.type)
			{
				case sf::Event::KeyReleased:
				{
					if (e.key.code == sf::Keyboard::Escape)
						wnd.close();
				}
				break;

				case sf::Event::Closed:
				{
					wnd.close();
				}
				break;
			}
		}
		wnd.clear(sf::Color(47, 147, 247, 255));

		wnd.display();
	}

	return 0;
}