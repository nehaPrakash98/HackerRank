#include <stdio.h>

int main(void)
{
	int t, i, n, temp, a, b;
	scanf("%d", &t);
	while(t--)
	{
	
		scanf("%d %d %d", &n, &a, &b);
		if(a==b)
		{
			printf("%d\n", a*(n-1));
			continue;
		}
		else if(a>b)
		{
			temp = a;
			a = b;
			b = temp;
		}
		for(i=0; i<n; i++)
		{
			printf("%d\n", a*(n-i-1)+b*i);
		}
	}
}
