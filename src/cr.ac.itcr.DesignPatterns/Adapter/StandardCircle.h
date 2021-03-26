//
// Created by juanpr on 26/3/21.
//

#ifndef TAREA_II_DATOS_II_STANDARDCIRCLE_H
#define TAREA_II_DATOS_II_STANDARDCIRCLE_H


/**
 * @class StandarCircle que recibe un radio para que el metodo oldDraw haga un circulo de esa medida
 * **/
class StandardCircle {
public:
    explicit StandardCircle(double radio) {
        radio_ = radio;
        cout << "StandardCircle: crear círculo de radio = " << radio_ << endl;
    }
    void oldDraw() const {
        cout << "StandardCircle dibujado a partir del radio = " << radio_ << endl;
    }
private:
    double radio_ ;
};


#endif //TAREA_II_DATOS_II_STANDARDCIRCLE_H
