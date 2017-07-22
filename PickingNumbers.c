#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int n, i, count=0, a[100], j, k=0, b[100], max=0, max1, temp;
	scanf("%d", &n);
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
		}
	}
	//for(i=0; i<n; i++)
	//	printf("%d\t", a[i]);
	for(i=0; i<n; i++) 
    {
		max1 = 1;
		for(j=i+1; j<n; j++) 
        {		
			if((abs(a[i] - a[j])) <= 1 )
			{
				max1++;
			//	b[k] = count+1;
			//	k++;
				
			}
			else
				j=n;
			
		}
		if(max<max1)
			max=max1;
}
		printf("%d", max);
}
