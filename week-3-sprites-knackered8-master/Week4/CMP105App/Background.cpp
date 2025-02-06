#include "Background.h"

Background::Background()
{

}

void Background::ReturnWindow(sf::RenderWindow* win)
{
	window = win;

}

void Background::handleInput(float dt)
{
	sf::View view = window->getView();
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		view.move(100 * dt, 0);
		window->setView(view);
		//window->setView(sf::View(sf::FloatRect(+100 * dt, 0, 1200, 675)));
	}

	if (input->isKeyDown(sf::Keyboard::Left))
	{
		view.move(-100 * dt, 0);
		window->setView(view);
		//window->setView(sf::View(sf::FloatRect(-100 * dt, 0, 1200, 675)));
	}
}