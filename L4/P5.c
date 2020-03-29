#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, *x, *v, i;

	x = (int*)malloc(sizeof(int)); 
	printf("dati x="); scanf("%d", x);

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
