#include <stdio.h>
int MCD(int x,int y);
int main() {
	int a,b,maxcomdiv;
	printf("Ingrese el primer entero: ");
	scanf("%d",&a);
	printf("\nIngrese el segundo entero: ");
	scanf("%d",&b);
	maxcomdiv=MCD(a,b);
	printf("\nEl máximo común divisor entre el primer y segundo entero es: %d",maxcomdiv);
	return 0;
}
int MCD(int x,int y){
	if (y==0) return x;
	return MCD(y,x%y);
}
