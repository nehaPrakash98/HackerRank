#include <stdio.h>

int main(void)
{
	int n, i, a[100], count=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n-1; i++)
	{
		if(a[i]%2 == 0)
			continue;
		else
		{
			a[i]++;
			a[i+1]++;
			count += 2;
		}
	}
	for(i=0; i<n; i++)
	{
		if(a[i]%2 == 0)
			continue;
		else
		{
			printf("NO");
			return 0;
		}
	}
	printf("%d", count);
}
