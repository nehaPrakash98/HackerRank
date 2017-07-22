#include <stdio.h>

int main(void)
{
	long int s, t, a, b, m1[100000], m2[100000], counta = 0, counto = 0, i, m, n;
	
	scanf("%ld %ld", &s, &t);
	scanf("%ld %ld", &a, &b);
	scanf("%ld %ld", &m, &n);
	for(i=0; i<m; i++)
	{
		scanf("%ld", &m1[i]);
		if((a+m1[i])>=s && (a+m1[i])<= t)
			counta++;
			//printf("%d", counta);
	}
	for(i=0; i<n; i++)
	{
		scanf("%ld", &m2[i]);
		if((b+m2[i])>=s && (b+m2[i]) <=t)
			counto++;
	}
	printf("%ld\n%ld", counta, counto);
		
}
