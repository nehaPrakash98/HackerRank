#include <stdio.h>

int main(void)
{
	int R, C, r, c, i, j, k, l, m, n, count=0, z, t;
	char str[2000][2000], str1[2000][2000];
	scanf("%d", &t);
	while(t--)
	{
		count = 0;
		scanf("%d%d", &R, &C);
		for(i=0; i<R; i++)
		{
			scanf("%s", str[i]);
		}
		scanf("%d %d", &r, &c);
		for(i=0; i<r; i++)
		{
			scanf("%s", str1[i]);
		}
		for(i=0; i<R-r+1; i++)
		{
			for(j=0; j<C-c+1; j++)
			{
				if(str[i][j] == str1[0][0])
				{
					z=0, count = 0;
					for(k = i, m=0; m<r; k++, m++)
					{
						for(l = j, n=0; n<c; l++, n++)
						{
							if(str[k][l] == str1[m][n])
								count++;
							else
							{
								z++;
								break;
							}
						}
						if(z!= 0)
						{
							break;
						}
					}
					if(count == r*c)
						break;	
				}
			}
			if((count) == r*c)
				break;	
		}
		if(count == r*c)
			printf("YES\n");
		else
			printf("NO\n");
	}
}

//int sent(int i, int j, char str[2000][2000], char str1[2000][2000], int r, int c)
//{
//}
