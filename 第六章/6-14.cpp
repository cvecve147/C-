#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int inputyear;
	printf("輸入要查詢的酉元：");
	scanf("%d",&inputyear);
		
	if(inputyear %4!=0)
	{
		printf("----------->所輸入的%d年為非閏年!!!!\n",inputyear);
	}
	else if (inputyear <100)
	{
		if(inputyear%4==0)
		{
			printf("----------->所輸入的%d年為閏年!!!!\n",inputyear);
		}else
		{
			printf("----------->所輸入的%d年為非閏年!!!!\n",inputyear);
		}
	}
	else if(inputyear >= 100 && inputyear <4000)
	{
		if(inputyear %100 ==0 && inputyear %400 !=0)
		{
			printf("----------->所輸入的%d年為非閏年!!!!\n",inputyear);
		}
		else
		{
			printf("----------->所輸入的%d年為閏年!!!!\n",inputyear);			
		}
	}
	else if (inputyear >=4000)
	{
		if( (inputyear%100==0 && inputyear %400!=0)|| inputyear %4000==0)
		{
			printf("----------->所輸入的%d年為非閏年!!!!\n",inputyear);
		}
		else 
		{
			printf("----------->所輸入的%d年為閏年!!!!\n",inputyear);
		}
	}
	system("pause");
	return 0;	
}
