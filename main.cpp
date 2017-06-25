#include <iostream>
#include <cstdlib>
#include <string>
#include "Node.hpp"
#include "Bicola.hpp"

using namespace std;

int main()
{
    /*std::string name;

  std::cout << "Please, enter your full name: ";
  std::getline (std::cin,name);
  std::cout << "Hello, " << name << "!\n";*/
    string ar;
    string can;

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

    bicola.p = bicola.frente();
    bicola.Mostrar(bicola.p);

    char sele;
    bicola.bandera = false;


    do{
            cout <<" "<< "\n";
            cout << "[R] Modo Aleatorio" << "\n";
            cout << "[F] Cancion Siguiente"<< "\n";
            cout << "[B] Cancion Anterior" << "\n";
            cout << "[A] Agregar Cancion" << "\n";
            cout << "[E] Eliminar Cancion" << "\n";
            cout << "[1] Ordenar por cancion" << "\n";
            cout << "[2] Ordenar por Autor" << "\n";
            cout << "[x] Terminar" << "\n";
            cin >> sele;
            system("cls");

            switch(sele){

        case 'r':
            if(!bicola.bandera){
            cout << "** Aleatorio On **" << "\n";
            cout << "" << "\n";
            bicola.Mostrar(bicola.p);
            bicola.bandera = true;
            break;
            }
            else{
                cout << "** Aleatorio off **" << "\n";
                cout << "" << "\n";
                bicola.Mostrar(bicola.p);
                bicola.bandera = false;
                break;
            }

        case 'f':
            if(bicola.bandera){
            cout << "** Aleatorio On **" << "\n";
            cout << "" << "\n";
            bicola.SiguienteAleatoria(bicola.p);
            bicola.bandera = true;
            break;
            }
            else{
            cout << "** Aleatorio off **" << "\n";
            cout << "" << "\n";
            bicola.Siguiente(bicola.p);
            break;
            }

        case 'b':
            if(bicola.bandera){
            cout << "** Aleatorio On **" << "\n";
            cout << "" << "\n";
            bicola.AnteriorAleatoria(bicola.p);
            break;
            }
            else{
            cout << "** Aleatorio off **" << "\n";
            cout << "" << "\n";

            bicola.Anterior(bicola.p);
            break;
            }

        case 'a':

            cout << "Artista: " << "\n";//<< endl;
            getline (cin,ar);
            getline (cin,ar);
            cout << "Cancion: " << "\n";
            getline (cin, can);
            bicola.Push(ar, can);
            bicola.Mostrar(bicola.p);
            break;


        case 'e':

            bicola.Pop(bicola.p);
            bicola.Mostrar(bicola.p);
            break;

    }



}
 while(sele != 'x');

return 0;
}

