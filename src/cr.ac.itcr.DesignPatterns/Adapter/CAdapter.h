#ifndef TAREA_II_DATOS_II_CADAPTER_H
#define TAREA_II_DATOS_II_CADAPTER_H
#include "Circulo.h"
#include "StandardCircle.h"
/**
 * @class CAdapter con metodo ejemplo dibujar que comunica la clase Círculo
 * con la clase StandardCircle para crear circulos a partir de su diámetro
 * y no su radio
 **/
class CAdapter : public Circulo, private StandardCircle{
public:
    explicit CAdapter(double radio);
    void dibujar() override;

};


#endif //TAREA_II_DATOS_II_CADAPTER_H
