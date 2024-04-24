#include <iostream>
#include <ftxui/component/component.hpp>
#include <ftxui/component/screen_interactive.hpp>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])

{
   auto pantalla= Screen::Create(Dimension::Fixed(10),Dimension::Fixed(10));
   Render(pantalla,border(text("Hola")));
   pantalla.PixelAt(5,5).charter= 'm';
   panatalla.Print();

   string prueba= "Otro";
   int posicionInicial=0;
   int posicionX=0;
   int posicionY=0;
   for (auto &&letra : prueba)
   {
        pantalla.PixelAt(posicionX,posicionY).character=letra;
        posicionX++;
        
   } 



    return 0;
}
