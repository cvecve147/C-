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
		printf ("�п�J��%d�H�����Z�G",i);
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
			printf("�A��J���~�@�бq�s��J");
			level='0';
								 
		}
		printf ("��%d�H�����Z�O%d �B�Ӧ��Z���Ŭ�%c \n\n",i,a[i],level);
				
	}
	printf("\n\n A����76~100���H��%d \nB����60~75���H��%d \nC����0~59���H��%d \n",count_A,count_B,count_C);
	system("pause");
	return 0;
	
}
