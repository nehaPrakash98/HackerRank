#include <stdio.h>

int main(void)
{
	int totalChap, prob, i, a[100], chapCount, pageCount, count=0;
	scanf("%d %d", &totalChap, &prob);
	for(i=1; i<=totalChap; i++)
		scanf("%d", &a[i]);
	chapCount = 1;
	pageCount = 1;
	while(chapCount <= totalChap)
	{
		for(i=1; i<=a[chapCount]; i++)
		{
			if(i == pageCount)
				count++;
			if(i+1 <= a[chapCount] && i%prob==0)
			{
				pageCount++;
			}
		}
		pageCount++;
		chapCount++;
	}
	printf("%d", count);
}
