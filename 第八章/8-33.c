#include <stdio.h>
#include <stdlib.h>
#define average(x,y) ((x)+(y))/2
int main (void)
{
	float x,y;
	scanf("%f",&x);
	scanf(" %f",&y);
	printf("f(x)=%f",average (x,y));
	
	system("pause");
	return 0;
}

