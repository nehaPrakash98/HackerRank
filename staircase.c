#include <stdio.h>

int main(void)
{
	int n, i, j;
	scanf("%d", &n);
	for(i =1; i<=n; i++)
	{
		for(j = n; j>0; j--)
		{
			if(j<=i)
				printf("#");
			else 
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
