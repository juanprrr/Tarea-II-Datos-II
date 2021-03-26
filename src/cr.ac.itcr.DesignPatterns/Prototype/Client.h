#ifndef TAREA_II_DATOS_II_CLIENT_H
#define TAREA_II_DATOS_II_CLIENT_H
#include "ConcretePrototypeA.h"
#include "ConcretePrototypeB.h"

/**
 * @class Client es la clase  que requiere una serie de objetos
 * los cuales se pueden clonar mediante un prototipo
 */
class Client{
public:
    static void init(){
        types[ 0 ] = new ConcretePrototypeA();
        types[ 1 ] = new ConcretePrototypeB();
    }

    static void remove(){
        delete types[ 0 ];
        delete types[ 1 ];
    }

    static Prototype* make( const int index ){
        if ( index >= n_types ){
            return nullptr;
        }
        return types[ index ]->clone();
    }

private:
    static Prototype* types[ 2 ];
    static int n_types;
};


#endif //TAREA_II_DATOS_II_CLIENT_H
