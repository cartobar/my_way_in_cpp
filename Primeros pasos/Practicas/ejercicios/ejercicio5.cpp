/*M�quina de caf�
Una m�quina de caf� hace 4 tipos de caf�:

Espresso
Americano
Cappuccino
Latte
Tarea
Crea un programa que genere el tipo de caf� correcto en funci�n de la elecci�n del usuario.
La variable choice se toma de la entrada y es un n�mero que corresponde al tipo de caf�.*/
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
