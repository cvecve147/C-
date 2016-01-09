#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int b;
	int c;
	printf("請輸入第一邊");
	scanf("%d",&a);
	printf("請請輸入第二邊");
	scanf(" %d",&b);
	printf("請輸入第三邊");
	scanf(" %d",&c);
	
	printf ("A=%d B=%d C=%d\n",a,b,c);
	
	if (a+b>c || a+c>b || c+b>a )
	{
		printf("可呈三角形");
	}
	else 
	{
		printf("不可成"); 
	}
		
	system("pause");
	return 0;
}
