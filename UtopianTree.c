#include <stdio.h>

int main(void)
{
	
	int i, n, height, a, j;
	scanf("%d", &n);
	for(j=0; j<n; j++) 
	{
		height = 1;
		scanf("%d", &a);
//		if(a==0)
//		printf("1\n");
//		else {
			for(i=1; i<=a; i++)
			{
				if(i%2 != 0)
				{
					height = height*2;
				}
				else
					height = height +1; 
			}
	//	}
		printf("%d\n", height);
	}
}
