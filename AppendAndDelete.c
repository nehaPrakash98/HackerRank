#include <stdio.h>
#include <string.h>

int main(void)
{
	int n, count = 0, i, c=0, c1=0; 
	char str1[100], str2[100];
	scanf("%s", str1);
	scanf("%s", str2);
	scanf("%d", &n);
	
	if(strcmp(str1, str2) == 0)
	{
		count = strlen(str1) + strlen(str2);
		if(n<=count && n%2==0)
			printf("Yes\n");
		else if(n>count)
			printf("Yes\n");
		else
			printf("No\n");
	}
	else
	{
		while(str1[i] != '\0' && str2[i] != '\0')
		{
			if(str1[i] != str2[i])
				break;	
			else
				c1++;
			i++;
		}
		count1 = strlen(str1) - c1;
	//	printf("%d\n", count);
		c = strlen(str2) - c1;
	//	printf("%d\n", c);
		int mismatch = count + c;
		if(n<mismatch)
			printf("No");
		else if(n<=mismatch+2*c1)
		{
			if((n-(mismatch))%2==0)
				printf("Yes");
			else
				printf("No");
		}
		else
			printf("Yes");
	}
}
