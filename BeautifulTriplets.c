#include <stdio.h>

int main(void)
{
	int n, d, i, j, x, y, z, k, a[20], count=0;
	scanf("%d %d", &n, &d);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[j] - a[i] != d)
				continue;
			for(k=j+1; k<n; k++)
			{
				x = a[k] - a[j];
				y = a[j] - a[i];
				if((k-j == j - i) && (x == d) && (y==d))
				{
					count++;
				//	if(k-j == d)
				//	printf("%d %d %d %d %d\n", a[i], a[j], a[k], x, y);
				//	else
				//		printf("Error\n");
				}
			}
		}
	}
	printf("%d", count);
	
}
