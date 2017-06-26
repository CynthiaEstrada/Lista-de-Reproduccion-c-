#include "Bicola.hpp"
#include "Node.hpp"
#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;



    void Bicola::Push(string x, string y){

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

