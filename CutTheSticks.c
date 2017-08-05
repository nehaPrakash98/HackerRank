#include<stdio.h>

int main(void)
{
	int n, i, j, temp, count=1, a[1000], small, large;
	scanf("%d", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
		
	for(i=1; i<n; i++)
		for(j=0; j<n-1; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
		
	small = a[0];
    printf("%d\n", n);
	for(i=0; i<n; i++)
	{
		if(a[i] != small)
		{
			small = a[i];
			printf("%d\n", n-i);
		}
	}
}

/*
#include<stdio.h>

int main() 
{
    int N,Array[1001]={0},temp=0;
    scanf("%d",&N);
    int i;
    for(i=0; i<N;i++)
    {
        scanf("%d",&temp);
        Array[temp]++;
    }
    
    for(i=0; i<= 1000 && N!=0 ; i++)
        if(Array[i]!=0)
	    {
	        printf("%d\n",N);
	        N =N- Array[i];    
	    }
    return 0;
}
*/
