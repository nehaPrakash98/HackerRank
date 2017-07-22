#include <stdio.h>

int main(void)
{
	int n, k, a, i, count, t, j;
	scanf("%d", &t);
	for(j=0; j<t; j++)
	{
		count = 0;
		scanf("%d %d", &n, &k);
		for(i=0; i<n; i++)
		{
			scanf("%d", &a);
			if(a<=0)
				count++;
			else
				continue;
		}
		if(count>=k)
			printf("NO\n");
		else
			printf("YES\n");
	}
}
