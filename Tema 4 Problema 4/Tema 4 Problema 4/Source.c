#include <stdio.h>
#include <stdlib.h>


/*
Sa se realizeze un program care transforma un numar
zecimal intr-un numar binar, cifrele binare vor fi insiruite intr-
un sir de elemente folosind pointer-ul.
*/

typedef struct binar
{
	int x;
	struct binar *urm;
}nod;

nod *adaugare(nod *prim, int k)
{
	nod *p, *q;
	p = (nod *)malloc(sizeof(nod));
	p->x = k;
	p->urm = NULL;

	if (prim == NULL) return p;
	else {
		q = prim;

		while (q->urm != NULL)
		{
			q = q->urm;
		}
		q->urm = p;
		return prim;
	}
}

void afisare(nod *prim)
{
	nod *p;

	p = prim;

	while (p)
	{
		printf("%d ", p->x);
		p = p->urm;
	}
}

int main()
{
	int n, k, *v, nr = 0;
	nod *prim;
	prim = NULL;

	printf("n="); scanf("%d", &n);
	v = (int*)malloc(8 * sizeof(int));

	while (n)  //baza 2
	{
		if (n % 2) k = 1;
		else k = 0;
		*(v + nr) = k; //il pun intr-un vector deoarece va trebui sa inversez finalul cu inceputul pentru a fi in baza 2
		n = n / 2;
		nr++;
	}

	nr--; //elimin un element pentru ca o sa am unul in plus

	while (nr >= 0)
	{
		prim = adaugare(prim, *(v + nr));// vectorul de la capat pentru a incepe lista exact pentru baza 2
		nr--;
	}
	afisare(prim); // afisez 
	return 0;
}
