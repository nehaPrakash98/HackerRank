#include <stdio.h>

int main(void)
{
	int n, k, i, j, count=0, sum, a[100];
	scanf("%d %d", &n, &k);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i = 0; i<n; i++)
	{
		sum =0;
		for(j = i+1; j<n; j++)
		{
			sum = a[i] + a[j];
			if(sum%k == 0)
				count++;
		}
	}
	printf("%d", count);
	return 0;
}
