#include <stdio.h>
int Pascal(int f,int c);
int main(int argc, char *argv[]) {
	//Para mostrar el triángulo de Pascal para n=10:
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<=i;j++){
			printf("%d",Pascal(i,j));
		}
		printf("\n");
	}
	return 0;
}
int Pascal(int f,int c){
	//Las "líneas" del triángulo son 1, que son los casos base.
	if(f==c||c==0) return 1;
	return Pascal(f-1,c-1)+Pascal(f-1,c);
}
