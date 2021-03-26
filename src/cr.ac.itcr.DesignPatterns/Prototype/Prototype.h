
#ifndef TAREA_II_DATOS_II_PROTOTYPE_H
#define TAREA_II_DATOS_II_PROTOTYPE_H

/***
 * @class Prototype que actua como intermediaria entre el client y
 * las clases que se desean clonar
 */
class Prototype{
public:
    virtual ~Prototype() = default;
    virtual Prototype* clone() = 0;
    virtual std::string type() = 0;

};


#endif //TAREA_II_DATOS_II_PROTOTYPE_H
