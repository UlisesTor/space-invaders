#include  <iostream>
#include <string>
#include <thread>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/string.hpp>
#include <ftxui/screen/terminal.hpp>
#include <fstream>//Nos permite hacer flujo de datos de archivos

using namespace std;
using namespace ftxui;


//(Generador de imagen)
int main(int argc, char const *argv[])
{
    fstream archivo;

    archivo.open("./assets/images/canon.txt");
    string canon;
    archivo >> canon;
    archivo.close();

    archivo.open("./assts/images/alien.txt");
    string alien;
    archivo >> alien;
    archivo.close();

    int fotograma =0;
    while (true)
    {
        fotograma++;
        Element personaje = spinner(21,fotograma) | bold | color(Color::Yellow1) | bgcolor(color::Green1);
        Element tanque = text(canon) | bold | color(Color::Green) | bgcolor(Color::Blue);
        Element lienzo = hbox({personaje, tanque});


        Screen pantalla = Screen::Create(
            Dimension::Full(),
            Dimension::Fit(lienzo));


        Render(pantalla, lienzo);
        pantalla.Print();
        cout<<pantalla.ResentPosition();

        this_thread::sleep_for(0,1s);

}
    
    
    return 0;
}
