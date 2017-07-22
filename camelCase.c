#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100000];
	long int i, count=0;
	scanf("%s", str);
	for(i=0; i<strlen(str); i++)
	{
		if(str[i] >= 'A'&& str[i] <= 'Z')
			count++;
		else
			continue;
	}
	printf("%ld", count+1);
}
