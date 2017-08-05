#include <stdio.h>
#include <string.h>

int main(void)
{
	int da, ma, ya, de, me, ye;
	scanf("%d %d %d", &da, &ma, &ya);
	scanf("%d %d %d", &de, &me, &ye);
	if(da<=de && ma<=me && ya<=ya)
		printf("0\n");
	else if(da>de && ma==me && ya==ye)
	{
		printf("%d\n", (15*(da-de)));
	}
	else if(ma>me && ya==ye)
	{
		printf("%d\n", (500*(ma-me)));
	}
	else
		printf("10000\n");
	return 0;
}
