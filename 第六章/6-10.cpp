#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	float a;
	float b;
	
	printf ("請輸數X跟Y");
	scanf("%f",&a);
	scanf(" %f",&b);
	
	
	if (a>0 && b>0)
	printf ("第一象限\n");
	if (a<0 && b>0)
	printf ("第二象限\n");
    if (a<0 && b<0)
	printf ("第三象限\n");
	if (a>0 && b<0)
	printf ("第四象限\n");

	if (a==0 && b==0)
	printf ("原點\n");
	else if (b==0)
	printf ("X軸\n");
	else if (a==0 )
	printf ("Y軸\n");
	
	system("pause");
	return 0;
}
