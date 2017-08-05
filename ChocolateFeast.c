#include <stdio.h>

int main(void)
{
	int n, c, m, t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d %d", &n, &c, &m);
		int ch = n/c; 
		int count = ch;
		while(m <= ch)
		{
			ch = ch-m;
			count++;
			ch++;
		}
		printf("%d\n", count);
	}
}
