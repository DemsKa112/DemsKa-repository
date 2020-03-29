#include <stdio.h>
#include <stdlib.h>

/*
5. Sa se realizeze un program care sa prezinte diferenta dintre
urmatoarele, incrementarea / decrementarea valorii pointerului,
precum si incrementarea / decrementarea pointerului care ia
adresa index-ului “0” a unui vector oarecare.
*/

 
int main()
{
	int n, *x, *v, i;

	x = (int*)malloc(sizeof(int)); 
	printf("x="); scanf("%d", x);

	(*x)++;

	printf("Incrementare:%d\n", *x);

	(*x)--;
	(*x)--; 

	printf("Decrementare:%d\n", *x);


	printf("n="); scanf("%d", &n);

	v = (int*)malloc(n * sizeof(int)); 

	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i + 1);
		scanf("%d", (v + i));
	}
	x = v; 

	(*x)++;

	printf("Incrementare:%d\n", *x);

	(*x)--;
	(*x)--;

	printf("Decrementare:%d\n", *x);

	return 0;
}
