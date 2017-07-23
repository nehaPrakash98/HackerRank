#include <stdio.h>

int main(void)
{
	int n, i, a[20], temp, j, k, m, q;
	scanf("%d %d %d", &n, &k, &m);
//	for(i=0; i<n; i++)
//		scanf("%d", &a[i]);
//	for(j=0; j<k; j++)
//	{		
//		temp = a[n-1];
//		for(i=n; i>0; i--)
//		{
//			a[i-1] = a[i-2];
//		}
//		a[0] = temp;
//	}
	int r = k%n;
	for(i=r; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<r; i++)
		scanf("%d", &a[i]);
	for(i=0; i<m; i++)
	{
		scanf("%d", &q);
		printf("%d\n", a[q]);
	}
}
