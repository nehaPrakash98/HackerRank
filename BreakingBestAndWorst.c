#include <stdio.h>

int main(void)
{
	long long int small, large, a[1000];
    int i, n, s=0, l=0; 
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%lld", &a[i]);
	small = a[0];
	large = a[0];
	//printf("%d %d\n", small, large);
	for(i=0; i<n; i++)
	{
		if(a[i] < small)
		{
			small = a[i];
			s++;
			//printf("%d %d\n", small, s);
		}
			
		else if(a[i] > large)
		{
			large = a[i];
			l++;
			//printf("%d %d\n", large, l);
		}
			
		else
			continue;
	}
	printf("%d %d", l, s);
	return 0;
}

