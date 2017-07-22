#include <stdio.h>
#include<string.h>
int main(void)
{
	int i, n, count=0, level = 0;
	char s[100];
    scanf("%d", &n);
	scanf("%s", s);
	for(i=0; i<n; i++)
	{
		if(s[i]=='D')
			level--;
		else if(s[i] == 'U')
		{
			level++;
			if(level == 0)
				count++;
		}
	}
	printf("%d", count);
	return 0;
}
