#include <stdio.h>

int main()
{
	int I, a = 0, b = 0;

	while (1)
	{
		I = scanf("%d %d", &a, &b);
		if (I == EOF)
			break;
		printf("%d\n", a + b);
	}

	return 0;
}