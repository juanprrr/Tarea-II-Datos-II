
#include <iostream>
#include "Prototype/Client.h"
#include "Adapter/CAdapter.h"

Prototype* Client::types[2];
int Client::n_types = 2;

int main()
{
    std::cout << "Usando patron adapter...\n"  << std::endl;
    Circulo*  c = new CAdapter(14);
    c->dibujar();

    std::cout << "Usando patron prototype...\n" << std::endl;
    Client::init();

    Prototype *prototype1 = Client::make( 0 );
    std::cout << "Prototype: " << prototype1->type() << std::endl;
    delete prototype1;

    Prototype *prototype2 = Client::make( 1 );
    std::cout << "Prototype: " << prototype2->type() << std::endl;
    delete prototype2;

    Client::remove();

    return 0;
}