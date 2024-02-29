#include "Lista.h"
#include <iostream>

using namespace std;

int main()
{
    Elemento arroz("Arroz");
    Elemento habichuela("Habichuela");
    Elemento carne("Carne");
    Lista lista;
    lista.agregar(&arroz);
    lista.agregar(&habichuela);
    lista.agregar(&carne);

    Elemento *i = lista.getPrimer();
    while (i != nullptr)
    {
        cout << i->getNombre() << endl;
        i = i->getSiguiente();
    }
    return 0;
}