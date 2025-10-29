/*Entradas para el parque infantil
Est�s haciendo una app para controlar la entrada de un parque infantil y la salida de la categor�a de entradas en funci�n de la edad del cliente.
Hay 3 categor�as de entradas:
Free: Los ni�os de 0 a 3 a�os tienen entradas gratis
Discounted: Los ni�os de 4 a 6 a�os tienen entradas con descuento.
Normal: Los mayores de 7 a�os tienen una entrada normal.
Tarea
Toma la edad(age) del cliente como entrada, y a continuaci�n genera la categor�a del billete correspondiente a esa edad.
Por ejemplo, si el usuario introduce 5 como edad, la salida deber�a ser "Discounted".*/
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
