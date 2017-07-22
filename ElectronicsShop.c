#include <stdio.h>

int main(void)
{
	int s, n, m, i, a[100], b[100], max, sum, j;
	scanf("%d %d %d", &s, &n, &m);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<m; i++)
		scanf("%d", &b[i]);
		max = -1;
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
            sum = 0;
			sum = a[i]+b[j];
			if(sum <= s && sum>max)
				max = sum;
            else if(sum > s)
                continue;
            else
                continue;
		}
	}
	printf("%d", max);
}
