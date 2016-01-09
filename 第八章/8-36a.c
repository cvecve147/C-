#include <stdio.h>
#include <stdlib.h>
#include "D:\my_math.h"
int main (void)
{
	int x;
	scanf("%d\n",&x);
	
	printf("x^2= %d\n",square(x));
	printf("x^3= %d\n",cubic(x));
	printf("x=-x %d\n",abs(x));
	
	system("pause");
	return 0;
}

