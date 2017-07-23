#include <stdio.h>

int main(void)
{
	int n, temp, count=0, i, t;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        count =0;
        scanf("%d", &n);
        temp = n;
        while(temp>0)
        {
            if(((temp%10) != 0) && ((n%(temp%10))== 0))
                count++;
            temp = temp/10;
        }
        printf("%d\n", count);
    }
	
}
