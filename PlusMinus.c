#include <stdio.h>

int main(void)
{
	int t, i, a;
	unsigned int p=0, n=0, z=0;
	scanf("%d", &t);
	for(i = 0; i<t; i++)
	{
		scanf("%d", &a);
		if(a>0)
			p++;
		else if(a<0)
			n++;
		else if(a==0)
			z++;
	}
	printf("%d %d %d\n", p, n, z);
	float ap = (float) p/t;
	float an = (float) n/t;
	float az = (float) z/t;
	printf("%0.6f\n%0.6f\n%0.6f", ap, an, az);
	return 0;
}
