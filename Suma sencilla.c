#include <stdio.h>
/*Este programa calcula la serie aritm�tica de un n�mero natural, es decir, suma
los n�meros naturales de manera sucesiva hasta el n�mero dado, por ejemplo, si
le damos el n�mero 5, sumar� 5+4+3+2+1 que nos d� 15*/
// Declaraci�n de la funci�n recursiva
int sum(int n);
int main() {
	int num, resultado;
	
	printf("Ingrese un n�mero natural: ");
	scanf("%d", &num);
	
	resultado = sum(num);
	
	printf("La suma  = %d", resultado);
	return 0;
}
//Desarrollo de la funci�n recursiva.
/*Para lograr realizar la suma sucesiva, creamos una funci�n que, si el n�mero
es distinto de cero, regrese la suma de la variable de entrada, con el valor 
anterior, e ingres�ndolo a la misma funci�n as� lo repetir� hasta llegar a uno*/
int sum(int n) {
	if (n != 0)
		// la funci�n sum() se llama a s� misma.
		return n + sum(n-1); 
	else
		return n;
}


