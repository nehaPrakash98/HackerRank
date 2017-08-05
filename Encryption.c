/*
#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void)
{
	
	int count = 0, i, j; 
	char str[100];
	gets(str);
	//scanf("%s", str);
    for(i=0; i<strlen(str); i++)
	{
		if(str[i] != ' ')
		{
			str[count] = str[i];
			count++;
		}
		else
			continue;
	}
	str[count] = '\0';
	int len = strlen(str);
	int rows = floor(sqrt(len));
	int columns = ceil(sqrt(len));
	if((rows*columns) < len)
    {
        for(i=rows; i<=columns; i++)
        {
            if((i*columns) >= len)
            {
                rows = i;
                break;
            }
            else
                continue;
        }
    }	//rows = columns;
	for(i=0; i<columns ; i++)
	{
		for(j=0; j<rows ; j++)
		{
			printf("%c", str[(j*columns)+i]);
		}
		printf(" ");
	}
}
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	
	int count = 0, i, j; 
	char str[82];
	gets(str);
	//scanf("%s", str);
     for(i=0; i<strlen(str); i++)
	{
		if(str[i] != ' ')
		{
			count++;
		}
		else
			continue;
	}
    int r, c;
	int sq = sqrt(count);
    if(sq*sq == count)
    {
        r = c = sq;
    }
    else
    {
        if(c*r < count)
        {
            r = sq+1; 
            c= sq+1; 
        }
        else
        {
            r = sq; 
            c = sq+1;
        }
    }
	for(i=0; i<c ; i++)
	{
		for(j=0; j<r ; j++)
		{
			printf("%c", str[(j*c)+i]);
		}
		printf(" ");
	}
}
