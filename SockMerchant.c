#include <stdio.h>

int main(void)
{
	int n, i, j, k, sum=0, count, a[100], b[100], temp=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
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
	i = 0; k = 0;
	while(i<n)
	{
		count = 0;
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				count++;
				
			}
            else
                continue;
		}
	b[k] = count+1;
	i =	i+count+1;
	k++;
	}
    sum = 0;
	for(i=0; i<k; i++)
	{
		sum = sum+(b[i]/2);
	}
	printf("%d", sum);
}
