#include "Node.hpp"
#include <string>
#include <iostream>

using namespace std;

void node::infoCancion(node *_a){
    cout << _a->_artista << " ________ " ;
    cout << _a->_cancion << endl;

}
