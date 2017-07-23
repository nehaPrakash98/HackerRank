#include <stdio.h>

int main(void)
{
	int n, k, a[25], i, sum;
	scanf("%d %d", &n, &k);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	sum = 100; 
	for(i=0; i<n; i=i+k)
	{
       // printf("%d\t", i);
		if(a[i] == 0)
			sum -= 1; 
		else
			sum -= 3;
       // printf("%d\t", sum);
	}
   // if(a[0] == 1)
     //   sum -=1;
    //else
      //  sum -= 1;
	printf("%d", sum);
}
