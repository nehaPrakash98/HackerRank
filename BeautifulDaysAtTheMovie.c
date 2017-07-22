#include<stdio.h>

int main(void)
{
	int i, x, y, z, count=0, rev, temp;
	scanf("%d %d %d", &x, &y, &z);
	for(i=x; i<=y; i++)
	{
		temp = i;
		rev = 0;
		while(temp>0)
		{
			rev = rev*10 + temp%10;
			temp=temp/10;
		}
	//	printf("%d\n", rev);
		if((abs(i-rev))%z == 0)
			count++;
	}
	printf("%d", count);
}
