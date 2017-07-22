#include <stdio.h>

int main(void)
{
	int i, t, count = 0;
	int n = 5;
	scanf("%d", &t);
	for(i=0; i<t; i++)
	{
		n = n/2;
		count += n;
		n = n*3;
	}
	printf("%d", count);
}
