#ifndef COLA_HPP
#define COLA_HPP

class Cola
{
public:
    Cola();
    ~Cola();
    
    void insertar(int v);
    void eliminar();
    void mostrar();
    int verPrimero();

private: 
    pnodoCola primero, ultimo;
    int longitud;
};

#endif // COLA_HPP
