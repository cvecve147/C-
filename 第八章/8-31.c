#include <stdio.h>
#include <stdlib.h>
#define f(x) 4*(x)*(x)+6*(x)-5
int main (void)
{
	float x;
	scanf("%f",&x);
	printf("f(x)=%f",f(x));
	
	system("pause");
	return 0;
}
