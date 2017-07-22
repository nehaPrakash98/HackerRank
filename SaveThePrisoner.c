#include <stdio.h>

int main(void)
{
	int t, j, n, m, s, count, i;
	scanf("%d", &t);
	for(j=0; j<t; j++)
	{
	scanf("%d %d %d", &n, &m, &s);
//		count = s;
//		for(i=0; i<m; i++)
//		{
//			if(count <= n)
//			{
//				count++;
//			}
//			else
//			{
//				count = 1;
//			}
//		}
//		printf("%d\n", count-1);
	printf("%d\n", (m+s-2)%n+1);
	}
}
