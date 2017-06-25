#include "Bicola.hpp"
#include "Node.hpp"
#include <iostream>
#include <string>

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
            _final ->_siguiente = _frente ->_anterior;
            _frente ->_anterior = _final ->_siguiente;
        s++;
        }

    }

    void Bicola::Pop(node *p){



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

