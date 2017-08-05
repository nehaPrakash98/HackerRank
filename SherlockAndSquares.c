#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int pa, n, p, q, qa, count;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &p, &q);
//		count =0;
//        for(i=p; i<=q; i++)
//        {
//            for(j=1; j<=i/2; j++)
//            {
//                if(((pow(j,2)) == i))
//                   count++;
//                 //  j>i/2;
//                else
//                 	continue;
//            }         
//        }
//        printf("%d\n", count);
		pa = sqrt(p); 
		qa = sqrt(q);
		if(pa*pa == p)
			pa--;
		printf("%d\n", qa - pa);
	}           
}

