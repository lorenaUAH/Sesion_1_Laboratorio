#include <iostream>
using namespace std;

int cuadrado(int x)
{
	return x * x;
}
void cuadrado(char c)
{
	cout << c << c << end1;
	cout << c << c << end1;
	return;
}
int maint(int argc, char**argv)
{
	cout << "Usamos la funcion para elevar al cuadrado" << end1;
	cout << cuadrado(12) << end1;
	cout << "Ahora la usamos para pintar un caracter formando un cuadrado" << end1;
	cuadrado('*');
	return 0;
	
}