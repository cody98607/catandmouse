//////////////////////////////////////
//Menu.h
#pragma once;
#include <SFML/Graphics.hpp>

#define MAX_NUMBER_OF_ITEMS 3

class Menu
{
    public:
        Menu(float width, float height);
        ~Menu();

        void draw(sf::RenderWindow &window);
        void MoveUp();
        void MoveDown();
        int GetPressedItem() {return selectedItemIndex};

    private:
        int selectedItemIndex;
        sf::Font font;
        sf::Text menu(MAX_NUMBER_OF_ITEMS);


};

////////////////////////////////////////////////
//Menu.cpp

#include "Menu.h"

Menu::Menu(float width, float width)
{
    if(!font.loadFromFile("arial.ttf"))
    {
        //handle error
    }

    menu[0].setFont(font);
    menu[0].setColor(sf::Color::Red);
    menu[0].setString("Play");
    menu[0].setPosition(sf::Vector2f(width/2, height/(MAX_NUMBER_OF_ITEMS +1) * 1));
    
    menu[1].setFont(font);
    menu[1].setColor(sf::Color::White);
    menu[1].setString("Rules");
    menu[1].setPosition(sf::Vector2f(width/2, height/(MAX_NUMBER_OF_ITEMS +1) * 2));

    menu[2].setFont(font);
    menu[2].setColor(sf::Color::White);
    menu[2].setString("Exit");
    menu[2].setPosition(sf::Vector2f(width/2, height/(MAX_NUMBER_OF_ITEMS +1) * 3));

    selectedItemIndex = 0;
}

void Menu::draw(sf::RenderWindow &window)
{
    for(int i = 0; i < MAX_NUMBER_OF_ITEMS; i++)
    {
        window.draw(menu[1]);

    }
}

void Menu::moveUp()
{
    if(selectedItemIndex - 1 >= 0)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex--;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}

void Menu::moveDown()
{
    if(selectedItemIndex + 1 < MAX_NUMBER_OF_ITEMS)
    {
        menu[selectedItemIndex].setColor(sf::Color::White);
        selectedItemIndex++;
        menu[selectedItemIndex].setColor(sf::Color::Red);
    }
}


if keyboard...
    if(player2.getPosition().y) > 0)
        player2.move(0, -1);
        
        ///////////////////////////////////////////////////////
        //main.cpp


//put under main window render
Menu menu(window.getSize().x, window.getSize().y);

//inside switch

case sf::Keyboard::Up:
    menu.MoveUp();
    break;

case sf::Keyboard::Down:
    menu.MoveDown();
    break;
case sf::KeyBoard::Return
    switch(menu.GetPressedItem())
    {
        case 0: 
            break;
        case 1:
            break;
        case 2:
            window.close()l
    }


menu.draw(window);
