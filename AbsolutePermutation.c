#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n, k, i, p=1, count = 0, temp, t;
	scanf("%d", &t);
    while(t--)
    {    
        scanf("%d %d", &n, &k);
        temp = k;
        if ( k == 0)
        {
            for(i=1; i<=n; i++)
            {
                printf("%d ", i);
            }
        }
        else if((n%(2*k)) == 0)
        {
            for(i=1; i<=n; i++)
            {

                printf("%d ", i+temp);
                if(i%k==0)
                {
                    temp *= -1;
                }
            }
        }
        else 
        {
                printf("-1");
        }
        printf("\n");
    }
}
