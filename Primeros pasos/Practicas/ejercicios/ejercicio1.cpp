#include <iostream>
using namespace std;

int main() {
    // el saldo de tu cuenta
    auto balance = 2452.4;
    // precio por cada cuaderno
    auto price = 259.99;

    // Tarea: calcule el n�mero de port�tiles que puede pagar y env�elo.
    // Sugerencia: utilice un n�mero entero para almacenar el resultado.
	int resultado = balance / price;
	cout << resultado << endl;
	auto resultadoCompra = price * resultado;
    // Tarea: calcule el monto restante en su cuenta despu�s de la compra y env�elo a una nueva l�nea.
    // Sugerencia: calcule el precio total de la compra y luego r�stelo del saldo.
 	
	auto resultadoBalance = balance - resultadoCompra;

	cout << resultadoBalance;

}
