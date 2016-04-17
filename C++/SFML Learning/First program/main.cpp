#include <SFML/Graphics.hpp>
#include <iostream>

const int SCRWIDTH = 600;
const int SCRHEIGHT = 400; 


int main(void){

	//Cria uma janela
	sf::RenderWindow main_window(sf::VideoMode(SCRWIDTH,SCRHEIGHT),"First Game");

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
	title.setString("First Game");
	title.setPosition(100, 100);
	/******************************************************/
	//Isso cria um retângulo no centro da tela, e encaixa o texto dentro dele (centraliza o texto na tela)
	sf::FloatRect textRect = title.getLocalBounds();
	title.setOrigin(textRect.left + textRect.width/2.0f, textRect.top  + textRect.height/2.0f);
	title.setPosition(sf::Vector2f( SCRWIDTH/2.0f, 50 ));
	/******************************************************/
	sf::Text game_over;
	game_over.setFont(font1);
	game_over.setCharacterSize(50);
	game_over.setString("GAME OVER");
	game_over.setPosition(SCRWIDTH/2.0f, SCRHEIGHT/2.0f);
	/******************************************************/

	/****************** CREATING A SPRITE ******************/
	sf::Texture t_background;
	t_background.loadFromFile("background.jpg", sf::IntRect(10, 10, 800, 600));

	sf::Sprite s_background;
	s_background.setTexture(t_background);
	/******************************************************/
	sf::Texture t_person;
	t_person.loadFromFile("person.png");
	/******************************************************/

	/***************** CREATING A PLAYER ******************/
	sf::RectangleShape person(sf::Vector2f(32, 32));
	//person.setFillColor(sf::Color::Black);
	//person.setOutlineThickness(4);
	person.setOutlineColor(sf::Color::White);
	person.setTexture(&t_person);
	float person_width = 50;
	float person_height = 200;
	person.setPosition(sf::Vector2f( person_width, person_height ));
	/******************************************************/
	

	// Variavel do loop principal
	bool is_running = true;

	bool right = false, left = false, up = false, down = false;

	while(is_running){
		// Enquanto existir events coloque na variavel "event"
		while(main_window.pollEvent(event)){
			// Caso foi clicado no 'X' da main_window
			if (event.type ==  sf::Event::Closed)
				is_running = false;
		}
		
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) right = true;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) left = true;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) up = true;
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) down = true;
		
		// Preenche a tela com uma cor
		main_window.clear(sf::Color::White);
		
		main_window.draw(s_background);
		main_window.draw(title);

		main_window.draw(person);

		if (right == true){
			person_width += 0.01;
			person.setPosition(sf::Vector2f( person_width, person_height ));
			main_window.draw(person);
			right = false;
		}

		if (left == true){
			person_width -= 0.01;
			person.setPosition(sf::Vector2f( person_width, person_height ));
			main_window.draw(person);
			left = false;
		}

		if (up == true){
			person_height -= 0.01;
			person.setPosition(sf::Vector2f( person_width, person_height ));
			main_window.draw(person);
			up = false;
		}

		if (down == true){
			person_height += 0.01;
			person.setPosition(sf::Vector2f( person_width, person_height ));
			main_window.draw(person);
			down = false;
		}

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