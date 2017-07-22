#include <stdio.h>

int main(void)
{
	int i, n, a[100], k1=0, k2=0, k3=0, k4=0, k5=0, temp, j;
	scanf("%d", &n);
	for(i =0; i<n; i++)
	{
		scanf("%d", &a[i]);
		switch(a[i])
		{
			case 1: 
				k1++;
				break;
			case 2:
				k2++;
				break;
			case 3:
				k3++;
				break;
			case 4:
				k4++;
				break;
			case 5:
				k5++;
				break;
		}
	}
	int b[5] = {k1, k2, k3, k4, k5};
	for(i=1; i<5; i++)
		for(j=0; j<4; j++)
		{
			if(b[j] > b[j+1])
			{
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	if(b[4] == k1)
		printf("%d", 1);
	else if(b[4] == 2)
		printf("%d", 2);
	else if(b[4] == 3)
		printf("%d", 3);
	else if(b[4] == 4)
		printf("%d", 4);
	else 
		printf("%d", 5);
		}
