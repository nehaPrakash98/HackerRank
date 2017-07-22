#include <stdio.h>

int main(void)
{
	int n, i, a[60], quo, diff, m1, m2;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] < 38)
			printf("%d\n", a[i]);
		else
		{
			quo = a[i]/5;
			m1 = 5*quo;
			m2 = 5*(quo+1);
			diff = m1 + 2;
			if(a[i] > diff)
				printf("%d\n", m2);
			else
				printf("%d\n", a[i]);
		}
		
	}
}
