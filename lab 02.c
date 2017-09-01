// ITEM 1

#include <stdio.h>
#include <stdlib.h>
int **iniciar (int a, int b, int **c);
int **llenar (int a, int b, int **c);
int **mos(int a, int b, int **c);
int veri(int a);
int **primo(int a, int b, int **c);
int main (){
	int **c;
	int *p;
	int a,b;
	printf ("ingrese la cnatidad de filas ");
	scanf ("%i",&a);
	printf ("ingrese la cnatidad de columnas");
	scanf ("%i",&b);
	c=iniciar (a, b ,c);
	c=llenar (a,b,c);
	c=mos(a,b,c);
	c= primo(a,b,c);
	
}
int veri(int a){
	int cont,i;
	int k=0;
	for ( k=1;k<=a;k++){
		if (a % k==0){
			cont ++;
		}
	}
	if (cont <=2){
		a=0;
		return a;	
	}
	return a;
}
int **iniciar(int a, int b , int **c){
	int i, j;
	c= malloc (a * sizeof (int*));
	for (i=0; i<a ;i++){
		c[i]= malloc (b * sizeof (int));
	}
	for (i=0; i<a ;i++){
			for (j=0;j<b;j++){
				c[i][j]=0;
			}
		}
	for (i=0; i<a ;i++){
			for (j=0;j<b;j++){
				printf ("%i ",c[i][j]);
}
printf("\n");
}
return c;
}
int **llenar(int a, int b , int **c){
	int i,j;
	for(i=0; i <a; i++){
		for (j =0;j<b;j++){
			c[i][j]=rand()%100;
		}
	}
	return c;
}
int **mos (int a, int b, int **c){
	int i,j;
	for ( i =0;i<a;i++){
		for (j = 0;j<b;j++){
			printf ("%i ",c[i][j]);
		}
		printf("\n");
	}
	return c;
}
int **primo(int a, int b, int **c){
	int f,i,j;
	for ( i=0;i<a;i++){
		for (j=0; j<b;j++){
			c[i][j] = veri ( c[i][j]);
		
		}
	}
	for (i=0;i<a;i++){
		for ( j=0; j<b;j++){	
			printf("%i ",c[i][j]);
			}		
		}
		printf ("\n");
	}



