#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a=1;
	int sum=0;
	start:
	    sum+=a;
		a=a+2;
		
		if(a<100)
		{		   
			goto start;
		}
	printf("%d a=%d",sum,a);
	system ("pause");
	return 0;
}
