#include<ftxui/dom/node.hpp>
#include<ftxui/screen/screen.hpp>
#include<ftxui/screen/string.hpp>


using namespace ftxui;


int main() {


    //Crea los elementos del interfaz de usuario
    Element label= text ("Hola mundo!");
    Element container =hbox({label});
     

    //Crea la pantalla y establece 
    autoscreen = screen::Create(
        Dimension :: Full(),
        Dimension::Fit(container)

    );
    Render(screen,container);
    screen.Print();

    return 0;
     
}