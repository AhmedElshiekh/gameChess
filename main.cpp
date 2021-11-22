#include <iostream>
#include <SFML/Graphics.hpp>
#include <time.h>


using namespace sf;


// Main Function
int main() 
{
    RenderWindow window(VideoMode(45,45), "The Chass!");
    
    sf::Texture t1 ;
    t1.loadFromFile("img/figures.png");
    
    Sprite s(t1);
    
    
    //  Windows open event
    while (window.isOpen())
    {
        
        Event e;
        while (window.pollEvent(e))
        {
            if (e.type == Event::Closed){
                window.close();
        }
        
        
        // Drowing Window
        window.clear();
        window.draw(s);
        window.display();  
        }
        
    }//End while
    
    return 0;
}// End Main
