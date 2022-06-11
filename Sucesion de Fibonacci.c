#include <stdio.h>
/*El n�mero de la i-�sima posici�n de la sucesi�n infinita de Fibonacci se calcula
con la condici�n de inicio ser� 0 y 1  para las primeras dos posiciones y para
las posiciones siguientes se dar� por fib(n-1)+fib(n-2)*/
int fib(int i);
int  main()
{
	int i;
	//Planteamos un bucle para obtener los primeros 10 n�meros.
	for (i = 0; i < 10; i++){
		printf("%d\t%n", fib(i));
	}
	return 0;
}
int fib(int i){
	if(i == 0) return 0;
	if(i == 1) return 1;
	return fib(i-1) + fib(i-2);
}
