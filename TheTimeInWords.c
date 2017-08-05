#include <stdio.h>
#include <string.h>
int main(void)
{
	int H, M;
	char c;
	scanf("%d%c%d", &H, &c, &M);
	char* hours[] = {"hi there!",
	    "one",
	    "two",
	    "three",
	    "four",
	    "five",
	    "six",
	    "seven",
	    "eight",
	    "nine",
	    "ten",
	    "eleven",
	    "twelve",
	    "one"};
	char* minutes[] = {"hello again :)",
		    "one",
		    "two",
		    "three",
		    "four",
		    "five",
		    "six",
		    "seven",
		    "eight",
		    "nine",
		    "ten",
		    "eleven",
		    "twelve",
		    "thirteen",
		    "fourteen",
		    "aaa",
		    "sixteen",
		    "seventeen",
		    "eighteen",
		    "ninteen",
		    "twenty",
		    "twenty one",
		    "twenty two",
		    "twenty three",
		    "twenty four",
		    "twenty five",
		    "twenty six",
		    "twenty seven",
		    "twenty eight",
		    "twenty nine",
		    "thirty!!!"};
		
		if(M == 0)
			printf("%s o'clock\n", hours[H]);
		else if(M == 1)
			printf("one minute past %s\n", hours[H]);
		else if(M<15)
			printf("%s minutes past %s\n", minutes[M], hours[H]);
		else if(M==15)
			printf("quarter past %s", hours[H]);
		else if(M<30)
			printf("%s past %s\n", minutes[M], hours[H]);
		else if(M==30)
			printf("half past %s\n", hours[H]);
		else if (M<45)
			printf("%s minutes to %s\n", minutes[60-M], hours[H+1]);
		else if(M == 45)
			printf("quarter to %s\n", hours[H+1]);
		else 
			printf("%s minutes to %s\n", minutes[60-M], hours[H+1]);
	}
