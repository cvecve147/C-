#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	double a;
	printf("請輸入公里:");
	scanf("%lf",&a);
	printf("\n你輸入的數字是:%lf\n",a);
	printf("英里:%lf",a/16);
	
		
	system("pause");
	return 0;
}
