#ifndef TAREA_II_DATOS_II_CONCRETEPROTOTYPEA_H
#define TAREA_II_DATOS_II_CONCRETEPROTOTYPEA_H
#include <string>
#include "Prototype.h"

/**
 * @class ConcretePrototypeA que ejemplifica un objeto que será
 * clonado cada vez que client lo solicite
 */
class ConcretePrototypeA : public Prototype
{
public:
    ~ConcretePrototypeA() {}

    Prototype* clone(){
        return new ConcretePrototypeA();
    }
    std::string type(){
        return "Clon tipo A";
    }
};


#endif //TAREA_II_DATOS_II_CONCRETEPROTOTYPEA_H
