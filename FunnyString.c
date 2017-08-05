#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[10000], str1[10000];
	int i, k, count = 0, t;
	scanf("%d", &t);
	while(t--)
	{
		count = 0;
		scanf("%s", str);
		for(i=strlen(str)-1, k=0; i>=0; i--, k++)
		{
			str1[k] = str[i];
		}
		str1[k] = '\0';
		//printf("%s", str1);
		
		for(i=1; i<strlen(str); i++)
		{
			int x = abs(((int)str[i]) - ((int)str[i-1]));
		//	printf("%d: %d\t", i, x);
			int y = abs(((int)str1[i]) - ((int)str1[i-1]));
		//	printf("%d: %d\n", i, y);
			if(x == y)
				count++;
				
		//	printf("%d\n", count);
		}
		//	printf("%d\n", strlen(str));
		int n = strlen(str);
		if((count) == (n-1))
			printf("Funny\n");
		else
			printf("Not Funny\n");
	}
}
