#include <iostream>
#include <string>
#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <Dibujo.hpp>
#include <thread>
#include <list>
#include <experimental/random>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])

{     int posicionInicialX = 0;
      int posicionInicialY = 0;

        string palabra = "DVD";
          
          while(true){
                this_thread::sleep_for(0.1s);

               int posicionPalabraX = 0;
               int posicionPalabraY = 0;

               auto Pantalla = Screen::Create(Dimension::Full(),Dimension::Full());
              
              for (auto &&letra : palabra)
              {
                int posicionFinalX = posicionFinalX + posicionPalabraX;
                int posicionFinalY=  posicionFinalY + posicionPalabraY;


                 auto Pantalla = Screen::Create(Dimension::Full(),Dimension::Full());

                Pantalla.PixelAt(
                  posicionFinalX,
                  posicionFinalY
                  ).character = letra;
                  posicionPalabraX++;

              }
              Pantalla.Print();
              Pantalla.Clear();
              cout<<Pantalla.ResentPosition();

              posicionInicialX++;
              posicionInicialY++;
              
               


     }
     return 0;
}
