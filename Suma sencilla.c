#include <stdio.h>
/*Este programa calcula la serie aritmética de un número natural, es decir, suma
los números naturales de manera sucesiva hasta el número dado, por ejemplo, si
le damos el número 5, sumará 5+4+3+2+1 que nos dá 15*/
// Declaración de la función recursiva
int sum(int n);
int main() {
	int num, resultado;
	
	printf("Ingrese un número natural: ");
	scanf("%d", &num);
	
	resultado = sum(num);
	
	printf("La suma  = %d", resultado);
	return 0;
}
//Desarrollo de la función recursiva.
/*Para lograr realizar la suma sucesiva, creamos una función que, si el número
es distinto de cero, regrese la suma de la variable de entrada, con el valor 
anterior, e ingresándolo a la misma función así lo repetirá hasta llegar a uno*/
int sum(int n) {
	if (n != 0)
		// la función sum() se llama a sí misma.
		return n + sum(n-1); 
	else
		return n;
}


