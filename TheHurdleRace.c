#include <stdio.h>

int main(void)
{
	int n, k, count=0, a[100], i, j, temp;
	scanf("%d %d", &n, &k);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);	
	}
		for(i=1; i<n; i++)
	{
		for(j=0; j<n-1; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
            else 
                continue;
		}
     }
           
	count = a[n-1] - k;
	if(count>0)
	   printf("%d", count);
    else
        printf("0");
	
}
