/*Suma
Necesitas crear una app que calcule la suma de los números del 1 al N, donde N se toma de entrada.
Por ejemplo, para el número 5, la salida debe ser 15, porque 1+2+3+4+5=15.*/

#include <iostream>

using namespace std;

int main(){
	
	int n;
	int x = 0; //acumulador empieza en 0
	cout << "ingrese un numero para sumar de cero hasta el numero ingresado" << endl;
	cin >> n;

	for(int i=1;i<=n;i++){
		
		
		x = x + i; //acumula la suma 
		
	}
	cout << endl << "La suma total de los numeros del 1 al " << n << " es " << x;
	return 0;
}
