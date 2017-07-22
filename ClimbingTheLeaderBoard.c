#include <stdio.h>

int main(void)
{
	int n, a[10], c[10], i, count = 1, x, m, j, b;
	scanf("%d", &n);
	for(i=0; i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	int k = 1; 
	x = a[0];
	c[0] = x;
	for(i=0; i<n; i++)
	{
		if(a[i] == x)
			continue;
		else
		{
			x=a[i];
			c[k] = x;
			k++;
			count++;
		}	
	}
	scanf("%d", &m);
	for(i=0;i<m;i++)
	{
		scanf("%d", &b);
		if(b<c[k-1])
			printf("%d\n", k+1);
		else if(b>c[0])
			printf("1");
		else
		{
			for(j=0; j<k; j++)
			{
				if(m>c[j+1] && m<c[j])
					printf("%d\n", j+1);
				else if(m == c[j])
					printf("%d\n", j+1);
			}
		}
	}
}
