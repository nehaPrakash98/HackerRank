#include<stdio.h>
#include <math.h>
int diff(int a[], int b[])
{
	int i = 0; 
	int sum = 0;
	for(i=0; i<9; i++)
	{
		sum += abs(a[i] - b[i]);
	}
	return sum;
}
int main(void)
{
	int i, a[9];
	for(i=0; i<9; i++)
		scanf("%d", &a[i]);
	
	int a1[]={8,1,6,3,5,7,4,9,2};
    int a2[]={4,9,2,3,5,7,8,1,6};
    int a3[]={8,3,4,1,5,9,6,7,2};
    int a4[]={4,3,8,9,5,1,2,7,6};
    int a5[]={6,1,8,7,5,3,2,9,4};
    int a6[]={2,9,4,7,5,3,6,1,8};
    int a7[]={6,7,2,1,5,9,8,3,4};
    int a8[]={2,7,6,9,5,1,4,3,8};
    
    int v[8];
	v[0] = diff(a, a1);
	v[1] = diff(a, a2);
	v[2] = diff(a, a3);
	v[3] = diff(a, a4);
	v[4] = diff(a, a5);
	v[5] = diff(a, a6);
	v[6] = diff(a, a7);
	v[7] = diff(a, a8);

	int min = v[0];
	for(i=0; i<9; i++)
	{
		if(v[i] < min)
			min = v[i];
	}
	printf("%d", min);
}
