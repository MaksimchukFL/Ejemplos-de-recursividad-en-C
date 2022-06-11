#include <stdio.h>
/*Realizamos un programa que calcule el factorial de un número. La definición de
factorial es naturalmente recursiva: El factorial de un número n (n!), será 1
si n<2 y será (n-1)!*n si n>2, es decir, que constará de repetir la función
factorial hasta llegar al caso base que es que el factorial de cualquier número
menor a dos*/
int Factorial(int n);
int main(int argc, char *argv[]) {
	int num,result;
	printf("Ingrese un número entero: ");
	scanf("%d",&num);
	result=Factorial(num);
	printf("\n El factorial del número ingresado es: %d",result);
	return 0;
}
int Factorial(int n){
	if(n==0) return 1;
	return n*Factorial(n-1);
}
