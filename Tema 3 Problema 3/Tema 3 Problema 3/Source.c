#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, nr;

	printf("x="); scanf("%d", &x);

	if (1 & (x >> 7) == 1) printf("numarul este negativ\n");
	else {
		nr = 7;
		while (nr != 0)
		{
			if (1 & (x >> nr) == 1) {
				printf("numarul este pozitiv");
				break;
			}
			nr--;
		}
		if (nr == 0) printf("numarul este 0");
	}
	return 0;
}
