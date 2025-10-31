/*Tarjetas de países
Tienes que escribir un programa para crear tarjetas de países en las que aparezcan los nombres del país y la capital.

Tarea
Completa el código para tomar el país y la capital como entrada y obtener el resultado que se muestra en el siguiente ejemplo ??.

Ejemplo de entrada
Portugal
Lisbon

Ejemplo de salida
Country: Portugal
Capital: Lisbon*/
#include <iostream>

using namespace std;

int main(){
	
	string country, capital;
	
	cout << "Por favor ingrese un pais y una capital: " << endl;
	cin >> country >> capital;
	
	cout<< "Country: " << country<< endl;
	cout << "Capital: " << capital;
	
	
	
	
	
	return 0;
}
