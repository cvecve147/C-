#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int inputyear;
	printf("��J�n�d�ߪ������G");
	scanf("%d",&inputyear);
		
	if(inputyear %4!=0)
	{
		printf("----------->�ҿ�J��%d�~���D�|�~!!!!\n",inputyear);
	}
	else if (inputyear <100)
	{
		if(inputyear%4==0)
		{
			printf("----------->�ҿ�J��%d�~���|�~!!!!\n",inputyear);
		}else
		{
			printf("----------->�ҿ�J��%d�~���D�|�~!!!!\n",inputyear);
		}
	}
	else if(inputyear >= 100 && inputyear <4000)
	{
		if(inputyear %100 ==0 && inputyear %400 !=0)
		{
			printf("----------->�ҿ�J��%d�~���D�|�~!!!!\n",inputyear);
		}
		else
		{
			printf("----------->�ҿ�J��%d�~���|�~!!!!\n",inputyear);			
		}
	}
	else if (inputyear >=4000)
	{
		if( (inputyear%100==0 && inputyear %400!=0)|| inputyear %4000==0)
		{
			printf("----------->�ҿ�J��%d�~���D�|�~!!!!\n",inputyear);
		}
		else 
		{
			printf("----------->�ҿ�J��%d�~���|�~!!!!\n",inputyear);
		}
	}
	system("pause");
	return 0;	
}
