#ifndef TAREA_II_DATOS_II_CONCRETEPROTOTYPEB_H
#define TAREA_II_DATOS_II_CONCRETEPROTOTYPEB_H
/**
 * @class ConcretePrototypeB que ejemplifica un objeto que será
 * clonado cada vez que client lo solicite
 */
class ConcretePrototypeB : public Prototype{
public:
    ~ConcretePrototypeB() {}

    Prototype* clone(){
        return new ConcretePrototypeB();
    }
    std::string type(){
        return "Clon tipo B";
    }

};


#endif //TAREA_II_DATOS_II_CONCRETEPROTOTYPEB_H
