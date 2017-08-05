#include <stdio.h>

int main(Void)
{
	int b, w, x, y, z, cost, n;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d %d", &b, &w);
		scanf("%d %d %d", &x, &y, &z);
		if((x+z)<y)
		{
			cost = (x+z)*w + b*x; 
			printf("%d\n", cost);
		}
		else if((y+z) < x)
		{
			cost = (y+z)*b + w*y; 
			printf("%d\n", cost);
		}
		else 
		{
			cost = w*y + b*x;
			printf("%d\n", cost);
		}
	}
}
