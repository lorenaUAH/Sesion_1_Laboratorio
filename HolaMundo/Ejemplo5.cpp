#include <iostream>
using namespace std;
const int minimo = 0, maximo = 10;

int main(int argc, char **argv)
{
	int n;
	cout<<"Introduzca un número entre "<< minimo<< " y "<<maximo<< ".";
	cin>>n;
	if ((n<minimo) ||(n>maximo))
		cout<< "El valor "<<n<< " esta fuera de rango.";
	else
		switch(n){
			case 0:
				cout << "No existe definicion del primo en este caso";
				break;
			case 2:
			case 3:
			case 5:
			case 7:
				cout << "El numero " << n << " es primo";
				break;
			default:
				cout << "El numero " << n << "no es primo";
				break;
						
		};
	return 0;
	
}