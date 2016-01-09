#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a[10];
	int i ;
	int count_A=0,count_B=0,count_C=0;
	char level;
	
	for (i=1; i<11;i++)
	{
		printf ("請輸入第%d人的成績：",i);
		scanf("%d", &a[i]);
		
		
		if (a[i]<60 &&a[i]>=0)
		{
			count_C++;
			level='C';
		}
		else if(a[i]<76 && a[i]>=60)
		{
			count_B++;
			level='B';
		}
		else if (a[i]<101 && a[i]>=76)
		{
			count_A++;
			level='A';
		}
		else if (a[i]>100)
		{
			printf("你輸入錯誤　請從新輸入");
			level='0';
								 
		}
		printf ("第%d人的成績是%d 且該成績等級為%c \n\n",i,a[i],level);
				
	}
	printf("\n\n A等級76~100的人數%d \nB等級60~75的人數%d \nC等級0~59的人數%d \n",count_A,count_B,count_C);
	system("pause");
	return 0;
	
}
