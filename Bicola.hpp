#ifndef __BICOLA_HPP__
#define __BICOLA_HPP__
#include "Node.hpp"
#include <string>

using namespace std;

class Bicola{

node *_frente;
node *_final;
int s;

public:

    bool bandera;
    node *p;

    Bicola(){s = 0; _frente = NULL; _final = NULL;}

    void Push(string, string);
    void Pop(node *);
    void Mostrar(node *);
    void SiguienteAleatoria(node *);
    node Siguiente(node *);
    void AnteriorAleatoria(node *);
    void Anterior(node *);
    void OrdenarPorCancion();
    void OrdenarPorArtista();
    void swap(node*, node*);
    int size(){return s;}
    bool Vacia(){return s == 0 ? true : false;}

    node *frente(){return _frente;}
    node *final(){return _final;}


};
#endif // __BICOLA_HPP__
