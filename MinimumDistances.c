#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void)
{
	int n, i, j, k=0, a[100000], b[100000], small;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=1; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i] == a[j] && i!=j)
			{
				b[k] = abs(i-j);
				k++;
			}
		}
	}
	small = b[0];
	for(i=0; i<k; i++)
		if(b[i] < small)
			small = b[i];
	if(small == 0)
		printf("-1");
	else
		printf("%d", small);
}
