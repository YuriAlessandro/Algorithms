#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <sstream>

#include "game_constants.h"

bool Collision(sf::FloatRect _person, sf::FloatRect _enemy){
    return _person.intersects(_enemy);
}

sf::RectangleShape create_monster( const float & enemy_width = 400, const float enemy_height = 260){
    sf::RectangleShape enemy(sf::Vector2f(32, 32));
    enemy.setPosition(sf::Vector2f( enemy_width, enemy_height ));
    return enemy;
}

int main(void) {
    int level_game = 1;

    // Cria uma janela
    sf::RenderWindow main_window(sf::VideoMode(SCRWIDTH,SCRHEIGHT), "Monster Divert");

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
    title.setString("Monster Divert");
    title.setPosition(100, 100);
    /******************************************************/
    // Isso cria um retângulo no centro da tela, e encaixa o texto dentro dele (centraliza o texto na tela)
    sf::FloatRect textRect = title.getLocalBounds();
    title.setOrigin(textRect.left + textRect.width/2.0f, textRect.top  + textRect.height/2.0f);
    title.setPosition(sf::Vector2f(SCRWIDTH/2.0f, 50));
    /******************************************************/
    sf::Text instruction;
    instruction.setFont(font1);
    instruction.setCharacterSize(10);
    instruction.setString("Try to reach the other side without hitting any enemies.");
    instruction.setPosition(150, 70);
    /******************************************************/
    sf::Text game_over;
    game_over.setFont(font1);
    game_over.setCharacterSize(50);
    game_over.setString("GAME OVER");
    sf::FloatRect textRect_go = game_over.getLocalBounds();
    game_over.setOrigin(textRect_go.left + textRect_go.width/2.0f, textRect_go.top  + textRect_go.height/2.0f);
    game_over.setPosition(sf::Vector2f(SCRWIDTH/2.0f, 200));
    /******************************************************/
    
    /****************** CREATING A SPRITE ******************/
    sf::Texture t_background;
    t_background.loadFromFile(BACKGROUND_IMG, sf::IntRect(10, 10, 800, 600));

    sf::Sprite s_background;
    s_background.setTexture(t_background);
    /******************************************************/
    sf::Texture t_ghost;
    t_ghost.loadFromFile(ENEMY_G);

    sf::Texture t_ciclop;
    t_ciclop.loadFromFile(ENEMY_C);
    /******************************************************/
    sf::Texture t_person;
    t_person.loadFromFile(PERSON_IMG);
	/******************************************************/
	sf::Texture t_level;
	t_level.loadFromFile(LEVEL_IMG);
	/******************************************************/

	/***************** CREATING A LEVEL *******************/
	sf::RectangleShape level(sf::Vector2f(600, 340));
	level.setTexture(&t_level);
	level.setPosition(0, 100);
	/******************************************************/
    
    /***************** CREATING A PLAYER ******************/
    sf::RectangleShape person(sf::Vector2f(32, 32));
    person.setOutlineColor(sf::Color::White);
    person.setTexture(&t_person);
    float person_width = 1;
    float person_height = 300;
    person.setPosition(sf::Vector2f(person_width, person_height));
    /******************************************************/

    // Variavel do loop principal
    bool is_running = true;
    
    bool right = false, left = false, up = false, down = false, run = true;

    int born_ghost = rand()%(300-205) + 205;
    int born_ciclop = rand()%(300-205) + 205;
    
    sf::RectangleShape ghosts[100];
    
    for (int i = 0; i < 100; i++){
        ghosts[i] = create_monster(601, born_ghost);
        ghosts[i].setTexture(&t_ghost);
    }

    sf::RectangleShape ciclops[100];
    
    for (int i = 0; i < 100; i++){
        ciclops[i] = create_monster(601, born_ciclop);
        ciclops[i].setTexture(&t_ciclop);
    }

    int mob_appear = 0;


    while (is_running) {
        // Enquanto existir events coloque na variavel "event"
        while (main_window.pollEvent(event)) {
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
        main_window.draw(level);
        main_window.draw(title);
        main_window.draw(instruction);
        main_window.draw(person);


        if (run == true){
            ghosts[mob_appear].setPosition(sf::Vector2f( ghosts[mob_appear].getPosition().x - 0.05, ghosts[mob_appear].getPosition().y  ));
            if( Collision( person.getGlobalBounds(), ghosts[mob_appear].getGlobalBounds() ) == true ) run = false;
            main_window.draw(ghosts[mob_appear]);
        }
        
        if (run == true){
            ciclops[mob_appear].setPosition(sf::Vector2f( ciclops[mob_appear].getPosition().x - 0.05, ciclops[mob_appear].getPosition().y  ));
            if( Collision( person.getGlobalBounds(), ciclops[mob_appear].getGlobalBounds() ) == true ) run = false;
            main_window.draw(ciclops[mob_appear]);
        }

        if (ciclops[mob_appear].getPosition().x <= 0){
            mob_appear++;
        }
        

        if (right == true){
            if( Collision( person.getGlobalBounds(), ghosts[mob_appear].getGlobalBounds() ) == false ){
                if( person_width <= 555 ) person_width += 0.05;
                person.setPosition(sf::Vector2f( person_width, person_height ));
                main_window.draw(person);
            }
            right = false;
        }

        if (left == true){
            if( Collision( person.getGlobalBounds(), ghosts[mob_appear].getGlobalBounds() ) == false ){
                if( person_width >= 0) person_width -= 0.05;
                person.setPosition(sf::Vector2f( person_width, person_height ));
                main_window.draw(person);
            }
            left = false;
        }

        if (up == true){
            if( Collision( person.getGlobalBounds(), ghosts[mob_appear].getGlobalBounds() ) == false ){
                if(person_height >= 205) person_height -= 0.05;
                person.setPosition(sf::Vector2f( person_width, person_height ));
                main_window.draw(person);
            }
            up = false;
        }

        if (down == true){
            if( Collision( person.getGlobalBounds(), ghosts[mob_appear].getGlobalBounds() ) == false ){
                if(person_height <= 355) person_height += 0.05;
                person.setPosition(sf::Vector2f( person_width, person_height ));
                main_window.draw(person);
            }
            level_game++;
            down = false;
        }

        if( Collision( person.getGlobalBounds(), ghosts[mob_appear].getGlobalBounds() ) ){
            main_window.draw(game_over);
            main_window.display();
        }
        
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