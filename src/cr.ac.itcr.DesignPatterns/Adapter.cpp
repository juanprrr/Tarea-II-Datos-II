//
// Created by juanpr on 25/3/21.
//

#include <iostream>

using namespace std;

/**
 * @class círculo con metodo ejemplo dibujar
 * **/
class Circulo {
public:
    virtual void dibujar() = 0;
};

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

/**
 * @class CAdapter con metodo ejemplo dibujar que comunica la clase Círculo
 * con la clase StandardCircle para crear circulos a partir de su diámetro
 * y no su radio
 *
 * **/
class CAdapter : public Circulo, private StandardCircle {
public:
    explicit CAdapter( double diameter) : StandardCircle(diameter/2) {
        cout << "CAdapter: crear círculo de diametro = " << diameter << endl;
    }

    void dibujar() override {
        cout << "CAdapter: dibujar." << endl;
        oldDraw();
    }
};

int main() {
    Circulo*  c = new CAdapter(14);
    c->dibujar();
}
