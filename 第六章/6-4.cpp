#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	printf("請輸入一個數:"); 
	scanf("%d",&a);
	
	if (a>0)
	{
			
	printf("輸入的是正數%d\n",a);
	}
		
	else
	{
	a=a*-1;	 	
	printf ("你輸入的是負數 絕對值為%d\n",a);
	}
	system("pause");
	return 0;
}
