/*Explorar países 
Eres un gestor turístico y necesitas un programa que identifique los países pequeños. Se considera que un país es pequeño si su población es menor de 10000 y su área es menor de 10000 hectáreas..
El código dado toma la población y área de la entrada del usuario.
Tarea:
Completa el código para generar "Small country" si se cumplen ambas condiciones. En caso contrario, no se mostrará nada.
Ejemplo de entrada
9955
7522
Ejemplo de salida
País pequeño*/

#include <iostream>

using namespace std;

int main(){
	
	//si la poblacion es menor que 10000 y su area es menor que 10000 es pais pequeno
	
	int population, area;
	
	cout << "ingrese la poblacion del pais por favor: " << endl;
	cin >> population;
	cout << endl << "ingrese el area del pais por favo: " << endl;
	cin >> area;
	
	if (population < 10000 && area < 10000){
		
		cout << "Small country";
	}else if (population >= 10000 || area <=1000){
	
		cout << "Big country";
		
	}else if (population <= 10000 || area >=1000){
		
		cout << "Big country";
	}
	
	
	
	
	return 0;
}
