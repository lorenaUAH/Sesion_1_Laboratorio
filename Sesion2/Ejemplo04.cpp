#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

struct persona{
	char nombre[30];
	int edad;
	long telefono;
	
};
void Escribir (persona p) //paso por valor
{
	cout << p.nombre << "tiene " << p.edad << " anyos y su telefono es " << p.telefono;
	cout << end1;
}
void EscribirPuntero(persona*p) //mediante puntero
{
	cout << p->nombre << " tiene " << p->edad << " anyos y su telefono es " << p->telefono;
	cout << end1;

}
persona CrearPersona(char n[30], int e, long t)
{
	persona aux;
	strcpy(aux.nombre, n); //La cadena n se copia en aux.nombre
	aux.edad = e;
	aux.telefono = t;
	return aux;
}

int main(int argc, char**argv)
{
	persona ejemplo;
	ejemplo = CrearPersona((char*)"Jesus", 99, 123456789);
	cout << "Paso por valor" << end1;
	Escribir (ejemplo);
	cout << end1;
	ejemplo = CrearPersona((char*)"Mario", 55, 987654321);
	cout << "Paso por punteros" << end1;
	EscribirPuntero(&ejemplo);
	return 0;
}