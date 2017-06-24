#ifndef __NODE_HPP__
#define __NODE_HPP__
#include <string>

using namespace std;

class node{

string _artista;
string _cancion;

node *_siguiente;
node *_anterior;

public:
    node(string x, string y):_artista(x), _cancion(y){_siguiente = NULL; _anterior = NULL;}

    void infoCancion(node *_a);
    string artista(node *_a){return _a->_artista;}

    node *siguiente(node *_a){return _a -> _siguiente;}
    node *anterior(node *_a){return _a -> _anterior;}

    friend class Bicola;
};
#endif // __NODE_HPP__
