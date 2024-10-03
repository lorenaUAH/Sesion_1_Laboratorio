#ifndef PILA_HPP
#define PILA_HPP

class Pila
{
public:
    Pila();
    ~Pila();
    void insertar(int v);
    void extraer();
    void cima();
    void mostrar();
    int getLongitud();
private:
    pnodoPila ultimo;
    int longitud;

};

#endif // PILA_HPP
