#pragma once
#include <string>

class Elemento
{
public:
    Elemento(std::string nombre);
    std::string getNombre();
    Elemento* getSiguiente();
    void setSiguiente(Elemento* elemento);

private:
    Elemento *_siguiente;
    std::string _nombre;
};