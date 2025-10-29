/*Máquina de café
Una máquina de café hace 4 tipos de café:

Espresso
Americano
Cappuccino
Latte
Tarea
Crea un programa que genere el tipo de café correcto en función de la elección del usuario.
La variable choice se toma de la entrada y es un número que corresponde al tipo de café.*/
#include <iostream>

using namespace std;

int main(){
	
	int choice;
	
	cout << "Bienvenido por favor elija una de nuestras especialidades: " << endl;
	cout << "1. Espresso" << endl;
	cout << "2. Americano" << endl;
	cout << "3. Cappuccino" << endl;
	cout << "4. Latte" << endl;
	
	cout << "Eleccion: "; cin >> choice;
	
	cout << "eligio... " << endl;
	
	switch(choice){
		case 1:
			cout << "Espresso";
			break;
		case 2: 
			cout << "Americano";
			break;
		case 3:
			cout << "Cappuccino";
			break;
		case 4:
			cout << "Latte";
			break;
		default:
			cout << "no eligio nada del menu";
	}
	
	
	
	
	return 0;
}
