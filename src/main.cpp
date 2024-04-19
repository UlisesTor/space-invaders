#include  <iostream>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/scren.hpp>
using namespace std;
using namespace ftxui;


//(Generador de imagen)
int main(int argc, char const *argv[])
{
    Element lienzo = hbox({
        spinner(1,1)     bold 
    });

    Screen pantalla = Screen::Create(
        Dimension::Full(),
        Dimension::Full()
    );


    Render(pantalla,lienzo);//Tomar lo que esta dentro del lienzo y dibujalo dentro de la pantalla
    pantalla.Print();
    pantalla.ResentPosition();

    this_thread::sleep_for(0.1s);
  
    fotograma ++;
    Element lienzo = hbox({spinner(21,1)|bold});


    Element personaje + spinner(21,fotogram)    
 
    





    return 0;
}
