//
// Created by juanpr on 26/3/21.
//

#include "CAdapter.h"
CAdapter::CAdapter(double diametro) : StandardCircle(diametro/2) {
    cout << "CAdapter: crear círculo de diametro = " << diametro << endl;
}
void CAdapter::dibujar() {
    cout << "CAdapter: dibujar." << endl;
    oldDraw();
}
/*
int main() {
    Circulo*  c = new CAdapter(14);
    c->dibujar();
}*/
