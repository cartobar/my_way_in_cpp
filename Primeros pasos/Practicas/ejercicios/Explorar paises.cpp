/*Explorar pa�ses 
Eres un gestor tur�stico y necesitas un programa que identifique los pa�ses peque�os. Se considera que un pa�s es peque�o si su poblaci�n es menor de 10000 y su �rea es menor de 10000 hect�reas..
El c�digo dado toma la poblaci�n y �rea de la entrada del usuario.
Tarea:
Completa el c�digo para generar "Small country" si se cumplen ambas condiciones. En caso contrario, no se mostrar� nada.
Ejemplo de entrada
9955
7522
Ejemplo de salida
Pa�s peque�o*/

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
