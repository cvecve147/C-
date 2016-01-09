#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	float num =4.2f;
	int a1=4,a2=12;
	
	printf("num=%f   ptr=%d\n",num,&num);
	printf("a1=%d    ptr=%d\n",a1,&a1);
	printf("a2=%d    ptr=%d\n",a2,&a2);
	
	system("pause");
	return 0;
}
