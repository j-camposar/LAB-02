//ITEM 2

#include <stdio.h>
#include <stdlib.h>
int *array(int *a, int b );
int *mayormenor(int *a,int b);
int main (){
	int *a;
	int b,c=0;
	printf("ingrese el largo del arreglo: ");
	scanf("%i",&b);
	printf ("%i", b);
	a=&c;
	a= array(a,b);
	mayormenor (a,b);
}
int *array (int *a, int b){
	int i;
	a=malloc (b * sizeof(int));
	for (i=0;i<b;i++){
		a[i]=rand() % 100;
		
	}
	printf("los numeros son : ");
	for (i=0;i<b;i++){
		printf ("%i",a[i]);
		printf ("\n");
	}
	printf ("\n");
	return a;
}
int *mayormenor(int *a, int b){
	int i,j,f;
	int c=0;
	int d;
	d = 1000;
	printf ("arreglo antes: ");
	for (i=0;i<b;i++){
		printf ("%i",a[i]);
		printf ("\n");
	}
	printf("\n");
	for (i=0;i<b;i++){
		if (c < a[i]){
			c = a[i];
			j = i;
		}
		if (d>a[i]){
			d=a[i];
			f=i;
		}
	}
	a[f]=c;
	a[j]=d;
	for (i=0;i<b;i++){
		printf ("%i",a[i]);
		printf ("\n");
	}
}

