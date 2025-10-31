/*Entrada del club
Est�s haciendo una app para controlar la entrada a un club.
S�lo los clientes que tienen 16 a�os o mayores est�n autorizados a entrar.

Tarea
Toma la age (edad) del cliente como entrada, y luego genera "Welcome", en caso de que sea mayor o igual a 16, y "Not allowed", si no es as�.
Por ejemplo, si el usuario introduce 28 a�os como edad, la salida deber�a ser "Welcome".*/

#include <iostream>

using namespace std;

int main(){
	
	int age;
	
	cout<< "Introduce tu edad para entrar en la discoteta por favor: " << endl;
	
	cin >> age;
	
	if (age >=16){
		cout << "Welcome" << endl;
	} else if (age <=15){
		cout << "Not allowed";
	}
	
	
	
	
	return 0;
}
