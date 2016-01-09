#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a;
	int i;
	for ( i=1; i<10;i++) 
	{
		printf("請輸入你的成績：");
		scanf("%d",&a);
		if (a>=80 && a<=100)
		{
			printf("A級");
		}
		else if (a>=60 && a<80 )
		{
			printf("B級");
		}
		else if (a<60 && a>0)
		{
			printf("C級");
		}
				
	}
	system("pause");
	return 0;
}
