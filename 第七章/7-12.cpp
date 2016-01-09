#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a,b,c,i;
	
	for (i=100;i<1000;i++)
	{
		a=i/100;
		b=i/10%10;
		c=i%10;
		
		if(a*a*a+b*b*b+c*c*c==i)
		printf("a=%db=%dc=%d i=%d\n",a,b,c,i);
	}
	system("pause");
	return 0;	
}
