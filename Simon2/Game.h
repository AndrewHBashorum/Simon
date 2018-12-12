// author Alph and heskey
#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();

	void setupText();

	void setupButtons();
	sf::RenderWindow m_window; // main SFML window
	sf::Font m_ArialBlackfont; // font used by message
	const sf::Color RED{ 180, 0, 0, 255 };
	const sf::Color GREEN{ 0, 180, 0, 255 };
	const sf::Color BLUE{ 0, 0, 180, 255 };
	const sf::Color YELLOW{ 180, 180, 0, 255 };
	const sf::Color WHITE{ 255, 255, 255, 255 };
	bool m_exitGame;
	
	sf::RectangleShape m_redSquare;
	sf::RectangleShape m_yellowSquare;
	sf::RectangleShape m_blueSquare;
	sf::RectangleShape m_greenSquare;
	sf::Font m_impactFont;
	sf::Text m_titleText;
	sf::Text m_instructionsTextBlue;
	sf::Text m_instructionsTextRed;
	sf::Text m_instructionsTextGreen;
	sf::Text m_instructionsTextYellow;
	sf::Text m_statusText;
};

#endif // !GAME

