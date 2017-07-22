#include <stdio.h>

int main(void)
{
	int i, j, k = 0, count = 0, n, m, a[100], b[100], c[100], small, large;
	scanf("%d %d", &m, &n);
	for(i = 0; i<m; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n; i++)
		scanf("%d", &b[i]);
	small = b[0];
	large = b[0];
	for(i=0; i<m; i++)
	{
		if(a[i] > large)
			large = a[i];
		else 
			continue;
	}
	for(i=0; i<n; i++)
	{
		if(b[i] < small)
			small = b[i];
		else
			continue;
	}
	for(i>=large; i<=small; i++)
	{
		for(j = 0; j< m; j++)
		{
			if(i%a[j] == 0) 
			{
				c[k] = i;
				k++;
			}
		}
		
	}
	
	for(i=0; i<k; i++)
		for(j=0; j<n; j++)
	{
		if (b[j]%c[i] == 0)
			count++;
	}
	printf("%d", count);
}
