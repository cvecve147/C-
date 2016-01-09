#include <stdio.h>
#include <stdlib.h>
#define cublc(x) x*x*x
int main (void)
{
	float x;
	scanf("%f",&x);
	printf("f(x)=%f",cublc(x));
	
	system("pause");
	return 0;
}
