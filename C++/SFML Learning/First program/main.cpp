#include <SFML/Graphics.hpp>
#include <iostream>

const int SCRWIDTH = 600;
const int SCRHEIGHT = 400; 


int main(void){

	//Cria uma janela
	sf::RenderWindow main_window(sf::VideoMode(SCRWIDTH,SCRHEIGHT),"First Program");

	// Variavel para eventos
	sf::Event event;

	/******************* CREATING FONTS *******************/
	sf::Font font1;
	font1.loadFromFile("/usr/share/fonts/truetype/ubuntu-font-family/Ubuntu-B.ttf");
	/******************************************************/
	
	/******************* CREATING TEXTS *******************/
	sf::Text title;
	title.setFont(font1);
	title.setColor(sf::Color::White);
	title.setStyle(sf::Text::Regular);
	title.setCharacterSize(50);
	title.setString("My First Program");
	title.setPosition(100, 100);
	/******************************************************/
	//Isso cria um retângulo no centro da tela, e encaixa o texto dentro dele (centraliza o texto na tela)
	sf::FloatRect textRect = title.getLocalBounds();
	title.setOrigin(textRect.left + textRect.width/2.0f, textRect.top  + textRect.height/2.0f);
	title.setPosition(sf::Vector2f( SCRWIDTH/2.0f, 50 ));
	/******************************************************/

	/****************** CREATING A SPRITE ******************/
	sf::Texture t_background;
	t_background.loadFromFile("background.jpg", sf::IntRect(10, 10, 800, 600));

	sf::Sprite s_background;
	s_background.setTexture(t_background);
	/******************************************************/

	/***************** CREATING A BUTTON ******************/
	sf::RectangleShape exit_button(sf::Vector2f(100, 40));
	exit_button.setFillColor(sf::Color::Black);
	exit_button.setOutlineThickness(4);
	exit_button.setOutlineColor(sf::Color::White);
	exit_button.setPosition(sf::Vector2f( 50, 320 ));
	/******************************************************/

	sf::Vector2i exitButton_Position = sf::Mouse::getPosition(main_window);
	
	// Variavel do loop principal
	bool is_running = true;

	while(is_running){
		// Enquanto existir events coloque na variavel "event"
		while(main_window.pollEvent(event)){
			// Caso foi clicado no 'X' da main_window
			if (event.type ==  sf::Event::Closed)
				is_running = false;
		}
		// Preenche a tela com uma cor
		main_window.clear(sf::Color::White);
		
		main_window.draw(s_background);
		main_window.draw(title);
		main_window.draw(exit_button);


		// Mostra a main_window
		main_window.display();

		//Fecha a janela se ESC for pressionado
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
    		main_window.close();
    		return EXIT_SUCCESS;
		}
	
	}

	// Fecha a main_window
	main_window.close();

	return EXIT_SUCCESS;
}