#include <iostream>
#include <stdlib.h>
#include "Node.hpp"
#include "Bicola.hpp"

using namespace std;

int main()
{
    Bicola bicola;

    bicola.Push("Nina Simone", "Feeling Good");
    bicola.Push("Cafe Tacvba", "Eres");
    bicola.Push("Foo Fighters", "Run");
    bicola.Push("Aerosmith", "I Don't Wanna Miss a Thing");
    bicola.Push("The Beatles", "Help!");
    bicola.Push("Guns N Roses", "Welcome To The Jungle");
    bicola.Push("Queen", "Under Pressure");
    bicola.Push("Sarah Jaffe", "Clementine");
    bicola.Push("Radiohead", "Creep");
    bicola.Push("Oasis", "Wonderwall");


    node *p = bicola.frente();
    bicola.Mostrar(p);

    char sele;



    do{
            cout <<" "<< endl;
            cout << "[R] Modo Aleatorio" << endl;
            cout << "[F] Cancion Siguiente"<< endl;
            cout << "[B] Cancion Anterior" << endl;
            cout << "[A] Agregar Cancion" << endl;
            cout << "[E] Eliminar Cancion" << endl;
            cout << "[1] Ordenar por cancion" << endl;
            cout << "[2] Ordenar por Autor" << endl;
            cout << "[x] Terminar" << endl;
            cin >> sele;
            system("cls");

            switch(sele){

        case 'r':
            if(!bicola.bandera){
            cout << "** Aleatorio On **" << endl;
            cout << "" << endl;
            bicola.Mostrar(p);
            bicola.bandera = true;
            break;
            }
            else{
                cout << "** Aleatorio off **" << endl;
                cout << "" << endl;
                bicola.Mostrar(p);
                bicola.bandera = false;
            }

        case 'f':
            if(bicola.bandera){

            }
            else{

            }
            break;

        bicola.Mostrar(p);
    }



}
 while(sele != 'x');

return 0;
}
