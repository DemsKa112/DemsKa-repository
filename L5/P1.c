#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX_SIZE 100
int ArrayStack[MAX_SIZE];
int top = -1;
void Push(int x)
{
	if (top == MAX_SIZE - 1)
	{
		printf("Error: stack overflow\n");
		return;
	}
	ArrayStack[++top] = x;
}
void afisare() 
{ 
	int i;
	printf("Stack: ");
	for (i = 0; i <= top; i++)
	{
		printf("%d ", ArrayStack[i]);
	}
	printf("\n");
}
int main()
{
	int i, n, a, V[8], k = 7;
	printf("dati numarul de numere:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("dati n=");
		scanf("%d", &a);
		while (k >= 0)
		{
			if (a != 0)
			{
				if (a % 2 == 0)
					V[k] = 0;
				else
					V[k] = 1;
			}
			else
				V[k] = 0;
			k--;
			a = a / 2;
		}
		for (k = 0; k <= 7; k++)
		{
			if (V[k] == 0)
				V[k] = 1;
			else
				V[k] = 0;
		}
		a = 0;
		for (k = 0; k <= 7; k++)
		{
			a = a * 10 + V[k];
		}
		Push(a);
	}
	afisare();
	system("pause");
	return 0;
}