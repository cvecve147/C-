#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	double a;	
	double b=3.14;
	printf("請輸入半徑：");
	scanf("%lf",&a);
	printf("4/3*拍*半徑3次方=%lf",4/3*b*(a*a*a));	
		
	system("pause");
	return 0;
}
