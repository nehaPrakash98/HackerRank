#include <stdio.h>

int main(void)
{
	int i, n, a[100], b, k, sum=0;
	scanf("%d %d", &n, &k);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	scanf("%d", &b);
	for(i=0; i<n; i++)
	{
		if (i == k)
			continue;
		else
			sum = sum+a[i];
	}
	printf("%d\n", sum);
	if(sum/2 == b)
		printf("Bon Appetit");
	else 
		printf("%d", sum-b);
	return 0;
}
