#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	double b1=3.14;
	int num=5;
	
	printf("b1=%f,ptr=%d\n",b1,&b1);
	printf("num=%d,ptr=%d\n",num,&num);
	
	system("pause");
	return 0;
}
