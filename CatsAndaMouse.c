#include<stdio.h>

int main(void)
{
	int q, a, b, c, i, d1, d2;
	scanf("%d", &q);
	for(i=0; i<q; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		d1 = c-a;
		if(d1<0)
			d1 = a-c;
		d2 = c-b;
		if(d2<0)
			d2 = b-c;
		if(d1 > d2)
			printf("Cat B\n");
		else if(d1 < d2)
			printf("Cat A\n");
		else
			printf("Mouse C\n");
	}
	return 0;	
}
