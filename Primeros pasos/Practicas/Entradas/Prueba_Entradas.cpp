#include <iostream>

using namespace std;


int main(){
	
	string mensaje;
	mensaje = "El valor del mensaje es Hola Mundo";
	
	cout << mensaje << endl;
	cout << "por favor ingrese un mensaje utilizando el siguiente formato (HolaMundo)" << endl;
	cin >> mensaje;
	
	cout << endl << "ahora el valor del mensaje es: " << mensaje;
	
	
	return 0;
}
