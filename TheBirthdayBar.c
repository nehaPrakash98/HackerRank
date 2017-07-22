#include <stdio.h>

int main(void)
{
	int n, i, a[100], b[100], d, m, j, sum, count=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	scanf("%d %d", &d, &m);
	
	for(i=0; i<n; i++)
	{
		sum = 0;
		for(j=i; j<(i+m); j++)
		{
			sum = sum+a[j];
		}
		b[i] = sum;
		//printf("%d\n", sum);
	}
	for(i=0; i<=n-1; i++)
	{
		if(b[i] == d)
			count++;
	}
	printf("%d", count);
return 0;
} 
