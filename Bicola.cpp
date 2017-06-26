#include "Bicola.hpp"
#include "Node.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include <time.h>
#include <ctype.h>

using namespace std;



    void Bicola::Push(string x, string y){
        char *letra = strdup(x.c_str());
        letra[0] = toupper(letra[0]);
        x = letra;
        char *letra2 = strdup(y.c_str());
        letra2[0] = toupper(letra2[0]);
        y = letra2;

        node *nuevo = new node(x, y);

        if(Vacia()){
            _frente = nuevo;
            _final = nuevo;
            s++;
        }
        else{
            nuevo ->_anterior = _final;
            _final ->_siguiente = nuevo;
            _final = nuevo;
        s++;
        }

    }


    void Bicola::Pop(node *_a){

        node *aux, *aux2, *aux3;
        aux = _a;

        if(_a == _frente){
            _frente = _frente ->_siguiente;
            _a = _frente;
            _a ->_anterior = NULL;
            p =_a;
            delete aux;
            s--;
        }
        if(_a == _final){
            _final = _final -> _anterior;
            _a = _frente;
            _final ->_siguiente = NULL;
            p = _a;
            delete aux;
            s--;
        }
    if(_a != _frente && _a != _final){
        aux2 = _a->_anterior;
        aux3 = _a ->_siguiente;

        aux2->_siguiente = _a ->_siguiente;
        aux3->_anterior = _a->_anterior;
        _a = aux3;
        p = _a;
        delete aux;
        s--;

    }
    }

    void Bicola::Mostrar(node *p){


        node *actual = _frente;

        while(actual != NULL){
                if(actual == p){
                    cout << "*";
                    actual->infoCancion(actual);
                    actual = actual ->_siguiente;
                }else{
            cout<< " ";
            actual->infoCancion(actual);
            actual = actual ->_siguiente;
        }
        }
        cout << " ";
    }

    node Bicola::Siguiente(node *q){
    node *proximo = q ->_siguiente;

    if(proximo != NULL){
    q = q ->_siguiente;
    p = q;
    Mostrar(q);
    }
    else{
        q = _frente;
        p = q;
        Mostrar(q);
        return *p;
    }
    return *p;

    }

    void Bicola::Anterior(node *q){

            node *proximo = q ->_anterior;

    if(proximo != NULL){
    q = q ->_anterior;
    p = q;
    Mostrar(q);
    }
    else{
        q = _final;
        p = q;
        Mostrar(q);
         }

    }

    void Bicola::SiguienteAleatoria(node *q){

    node *proximo;
    srand(time(NULL));
    int x = rand()% (s - 1);
    for(int i = 0; i <= x; i++){
    proximo = q ->_siguiente;
    if(proximo != NULL){
    q = q ->_siguiente;
    p = q;
    }
    else{
        q = _frente;
        p = q;
         }

    }
    Mostrar(p);

    }

    void Bicola::AnteriorAleatoria(node *q){
    node *proximo;
    srand(time(NULL));
    int x = rand()% (s - 1);
    for(int i = 0; i <= x; i++){
    proximo = q ->_anterior;
    if(proximo != NULL){
    q = q ->_anterior;
    p = q;
    }
    else{
        q = _final;
        p = q;
         }

    }
    Mostrar(p);


    }

    void Bicola::OrdenarPorArtista(){

    node *aux, *aux2;
    string a, b;
    bool bandera = true;

    for(int i = 1; i <= s;){
        if(bandera){
        aux = _frente;
        aux2 = _frente ->_siguiente;
        a = _frente ->_artista;
        b = _frente->_siguiente->_artista;
                if(a.substr(0) > b.substr(0)){
            swap(aux, aux2);
        }
        bandera = false;
        aux = aux2;
        aux2 = aux2 ->_siguiente;
        a = aux ->_artista;
        b= aux2 ->_artista;
        i++;
        }else{

        if(a.substr(0) > b.substr(0)){
            swap(aux, aux2);
        }
        aux = aux2;
        a = aux ->_artista;
        if(aux == _final){
            bandera = true;
        }else{

        aux2 = aux2 ->_siguiente;
        b= aux2 ->_artista;
        }
        }
    }
    }
    void Bicola::OrdenarPorCancion(){

    node *aux, *aux2;
    string a, b;
    bool bandera = true;

    for(int i = 1; i <= s;){
        if(bandera){
        aux = _frente;
        aux2 = _frente ->_siguiente;
        a = _frente ->_cancion;
        b = _frente->_siguiente->_cancion;
                if(a.substr(0) > b.substr(0)){
            swap(aux, aux2);
        }
        bandera = false;
        aux = aux2;
        aux2 = aux2 ->_siguiente;
        a = aux ->_cancion;
        b= aux2 ->_cancion;
        i++;
        }else{

        if(a.substr(0) > b.substr(0)){
            swap(aux, aux2);
        }
        aux = aux2;
        a = aux ->_cancion;
        if(aux == _final){
            bandera = true;
        }else{

        aux2 = aux2 ->_siguiente;
        b= aux2 ->_cancion;
        }
        }
    }
    }


    void Bicola::swap(node *_a, node *_b){

        string aux1, aux2;

        aux1 = _a->_artista;
        _a->_artista = _b->_artista;
        _b ->_artista = aux1;
        aux2 = _a->_cancion;
        _a ->_cancion = _b->_cancion;
        _b ->_cancion = aux2;
    }

    Bicola::~Bicola(){
        delete _frente;
        delete  _final;
        cout << "Se Termino";
    }
