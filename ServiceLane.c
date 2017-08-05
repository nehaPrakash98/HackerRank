#include <stdio.h>

int main(void)
{
	int n, t, i, j, small, x, y, a[100];
//	scanf("%d", &n);
	scanf("%d %d", &n, &t);
		for(i=0; i<n; i++)
			scanf("%d", &a[i]);
	while(t--)
	{
		scanf("%d %d", &x, &y);
		small = a[x]; 
		for(i=x+1; i<=y; i++)
			for(j=x; j<y; j++)
				if(a[i] < small)
					small = a[i];
		printf("%d\n", small);
	}
}
