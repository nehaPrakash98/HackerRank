#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, large, b[100], a[26], c[100], k=0, temp, j;
	char str[100];
	for(i=0; i<26; i++)
		scanf("%d", &a[i]);
	scanf("%s", str);
	for(i=0; i<strlen(str); i++)
	{
		b[i] = (int)str[i] - 65;
	}
    large = b[0];
  //  int k = 0
	for(i=0; i<strlen(str); i++)
        for(j=0; j<26; j++)
	{
		if(b[i] == j){
			c[k] = a[i];
            k++;
            printf("%d\n", c[k]);
        }
	}
		for(i=1; i<k; i++)
	{
		for(j=0; j<k-1; j++)
		{
			if(c[j] > c[j+1])
			{
				temp = c[j];
				c[j] = c[j+1];
				c[j+1] = temp;
			}
            else 
                continue;
		}
	}
    printf("%d\n", c[k-1]);
	printf("%ld", strlen(str)*c[k-1]);
}
