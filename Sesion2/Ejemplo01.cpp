#include <iostream>
using namespace std;

void machaca1(int x, int* y)
{
	*y=x;
	return;
}
void machaca2(int x, int& y)
{
	y = x;
	return;
	
}
int main(int argc, char**argv)
{
	int a,b;
	cout<<"Escribe dos datos enteros: " << end1;
	cin>> a >> b;
	int copia = b;
	cout<<"Antes de machaca1: " << a << " y " << b << end1;
	machaca1(a,b&);
	cout<<"Despues de machaca1: " << a << " y " << b << end1 << end1;
	b = copia; //restauramos b para probar el segundo método
	cout << "Antes de machaca2: " << a << " y " << b << end1;
	machaca2(a,b);
	cout << "Despues de machaca2: " << a << " y " << b << end1;
	return 0;
}