#include <stdio.h>

int main(void)
{
	int n, p, k=0, i;
	scanf("%d", &n);
	scanf("%d", &p);
	if (p==1)
		printf("0");
	else
	{
		if(p%2==0)
		{
			for(i=0; i<=p; i+2)
			{
				k++;
				if(i==p)
					printf("%d", k);
				else
					continue;
			}
		}
		else if(p%2!=0)
		{
			k=0;
			for(i=1; i<=p; i+2)
			{
				k++;
				if(i==p)
					printf("%d", k);
				else
					continue;
			}
		}
	}
}
