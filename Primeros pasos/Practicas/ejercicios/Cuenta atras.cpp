/*Cuenta atr�s
Crea un programa temporizador que tome el n�mero de segundos(number) como entrada, y cuenta atr�s hasta 0.
Aqu� hay un ejemplo de salida para la entrada 5:
5
4
3
2
1
0*/
#include <iostream>

using namespace std;

int main(){
	
	int number;
	
	cout << "ingrese un numero para empezar a contar por favor" << endl;
	
	cin >> number;
	
	while(number>=0){
		
		cout << number << endl;
		number = number - 1;
		
		
		
	}
	
	
	
	
	
	return 0;
}
