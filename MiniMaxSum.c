#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	long int temp, sum_min=0, sum_max=0;
	long int arr[5];
	for(i=0; i<5; i++)
		scanf("%d", &arr[i]);
	for(i=1; i<5; i++)
		for(j=0; j<4; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	for(i=0; i<4; i++)
		sum_min += arr[i];
	for(i=1; i<5; i++)
		sum_max += arr[i];
	printf("%ld %ld", sum_min, sum_max);
	return 0;
}
