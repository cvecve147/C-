#include <stdio.h>
#include <stdlib.h>
#include "D:my_math.h"
int main (void)
{
	float x,y;
	scanf("%f",&x);
	scanf(" %f",&y);
	
	printf("average=%f",average(x,y));
	printf("product=%f",product(x,y));
	
	system("pause");
	return 0;
}
