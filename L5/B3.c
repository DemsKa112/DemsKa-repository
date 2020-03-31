#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int ArrayStack[MAX_SIZE];
int topA = -1;
int Comp[MAX_SIZE];
int topC = -1;
void Push(int x)
{
	if (topA == MAX_SIZE - 1)
	{
		printf("Error: stack overflow\n");
		return;
	}
	ArrayStack[++topA] = x;
}
void PushC(int x)
{
	if (topC == MAX_SIZE - 1)
	{

		printf("Error: stack overflow\n");
		return;
	}
	Comp[++topC] = x;
}
void PopC()
{
	if (topC == -1)
	{

		printf("Error: No element to pop\n");
		return;
	}
	topC--;
}
void afisare() {
	int i;
	printf("Stiva cu palindroame: ");
	for (i = 0; i <= topA; i++)
	{
		printf("%d ", ArrayStack[i]);
	}
	printf("\n");
}
int main()
{
	int i, n, a, c, k = 0;
	printf("dati numarul de numere:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		k = 0;
		printf("dati a=");
		scanf("%d", &a);
		c = a;
		while (c)
		{
			PushC(c % 10);
			c = c / 10;
		}
		c = a;
		while (k == 0 && c != 0)
		{
			if (c % 10 != Comp[topC])
				k = 1;
			c = c / 10;
			PopC();
		}
		if (k == 0)
			Push(a);

	}
	afisare();
	system("pause");
	return 0;
}