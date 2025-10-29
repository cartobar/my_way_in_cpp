/*¡Recuerda tu contraseña!
Estás escribiendo un programa para un sistema de autenticación de un sitio web. Para iniciar sesión, los usuarios introducen sus contraseñas.
El programa dado toma la contraseña correcta y el intento como entrada.

Tarea
Completa el programa para generar "Welcome" si la contraseña y los valores de intento son iguales. Genera "Try again" si no es así.
Ejemplo de entrada
Dgt2023!
Dgt20!

Ejemplo de salida
Try again*/
#include <iostream>

using namespace std;

int main(){
	
	string password;
	string passMemory;
	
	cout <<"por favor ingresa una contrasena: " << endl;
	cin >> password;
 	passMemory = password;
 	cout << "la contrasena se registro con exito <3 Ingresela nuevamente por favor: " << endl;
 	cin >> password;
 	
 	if (password == passMemory){
 		cout << "Welcome" << endl;
 		
	 } else if (password != passMemory){
	 	cout << "Try again" << endl;
	 }
	
	
	
	return 0;
}
