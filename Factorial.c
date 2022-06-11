#include <stdio.h>
/*Realizamos un programa que calcule el factorial de un n�mero. La definici�n de
factorial es naturalmente recursiva: El factorial de un n�mero n (n!), ser� 1
si n<2 y ser� (n-1)!*n si n>2, es decir, que constar� de repetir la funci�n
factorial hasta llegar al caso base que es que el factorial de cualquier n�mero
menor a dos*/
int Factorial(int n);
int main(int argc, char *argv[]) {
	int num,result;
	printf("Ingrese un n�mero entero: ");
	scanf("%d",&num);
	result=Factorial(num);
	printf("\n El factorial del n�mero ingresado es: %d",result);
	return 0;
}
int Factorial(int n){
	if(n==0) return 1;
	return n*Factorial(n-1);
}
