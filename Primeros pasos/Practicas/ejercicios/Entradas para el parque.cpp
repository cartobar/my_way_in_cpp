/*Entradas para el parque infantil
Estás haciendo una app para controlar la entrada de un parque infantil y la salida de la categoría de entradas en función de la edad del cliente.
Hay 3 categorías de entradas:
Free: Los niños de 0 a 3 años tienen entradas gratis
Discounted: Los niños de 4 a 6 años tienen entradas con descuento.
Normal: Los mayores de 7 años tienen una entrada normal.
Tarea
Toma la edad(age) del cliente como entrada, y a continuación genera la categoría del billete correspondiente a esa edad.
Por ejemplo, si el usuario introduce 5 como edad, la salida debería ser "Discounted".*/
#include <iostream>

using namespace std;


int main(){
	
	int age;
	
	cout <<"Ingrese la edad del cliente: " << endl;
	cin >> age;
	
	if (age >=7 ){
		cout <<"Normal";
	} else if (age >= 4 && age <=6){
		
		cout <<"Discounted";
		
	}else if(age <=3 && age >=0){
		
		cout <<"Free";
		
	}else {
		cout << "Dato invalido";
	}
	
	
	return 0;
}
