#include <stdio.h>

int main(void)
{
	int i, n, hh1;
	char str[10];
	scanf("%s", str);
	int h1 = (int)str[0] - '0';
	int h2 = (int)str[1] - '0';
	int hh = h1*10+h2%10;
	if(str[8] == 'A')
	{
		if(hh==12)
		{
			printf("00");
			for(i=2; i<8; i++)
				printf("%c", str[i]);
		}
		else
			for(i=0; i<8; i++)
				printf("%c", str);
	}
	else
	{
			if(hh==12)
		{
			printf("00");
			for(i=2; i<8; i++)
				printf("%c", str[i]);
		}
		else
		{
			hh1 = hh+12;
			printf("%d", hh1);
			for(i=2; i<8; i++)
				printf("%c", str[i]);
		}
	}
	return 0;
}
