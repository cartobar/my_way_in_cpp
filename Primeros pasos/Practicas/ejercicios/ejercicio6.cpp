/*Bot para centros de llamadas
Estás escribiendo un programa para un proveedor de servicios de atención al cliente. Al llamar al servicio, los usuarios pueden seleccionar entre estas funciones utilizando los números correspondientes:
1 => Choose language
2 => Contact the operator
3 => Leave feedback
El programa dado toma el número seleccionado como entrada.

Tarea
Completa el programa para generar el mensaje correspondiente en función del número introducido.
En caso de que el usuario introduzca un número no admitido, el programa debe generar Unknown.
Ejemplo de entrada
2
Ejemplo de salida
Contactar con el operador*/
#include <iostream>

using namespace std;

int main(){
	
	int number;
	
	cout << "Bienvenido a centro de operadores Cartobar" << endl << "por favor seleccione una opcion a contactar" << endl;
	cout << "1 => Choose language" << endl;
	cout << "2 => Contact the operator" << endl;
	cout << "3 => Leave a feedback" << endl;
	cin >> number;
	cout << "su eleccion fue... " << endl;
	
	switch(number){
		case 1:
			cout << "Choose language";
			break;
		case 2:
			cout << "Contact the operator";
			break;
		case 3:
			cout << "Leave feedback";
			break;
		default: 
			cout << "Unknown";
		
		
	}
	
	
	return 0;
}
