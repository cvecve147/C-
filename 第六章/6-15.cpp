#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int prince;
	int money;
	printf("��J�ӫ~����G");
	scanf("%d",&prince);
	printf("��J��ڥ浹���������B�G");
	scanf("%d",&money);
	int totalback;
	int back;
	int m1000=0,m500=0,m100=0,m50=0,m10=0,m5=0,m1=0;
	
	if(money<prince)
	{
		printf("----->���B�����I�I�I\n");
	}
	else {
		totalback=money-prince;
		back=money -prince;
		
		while (back >0)
		if (back>=1000){
			m1000=m1000+1;
			back=back-1000;
			continue;
		}
		else if (back>=500){
			m500=m500+1;
			back=back-500;
			continue;
		}
		else if (back>=100)
		{
			m100=m100+1;
			back=back-100;
			continue;
		}
		else if (back>=50)
		{
			m50=m50+1;
			back=back-50;
			continue;
		}
		else if (back>=10){
			m10=m10+1;
			back=back-10;
			continue;
		}
		else if (back>=5){
			m5=m5+1;
			back=back-5;
			continue;
		}
		else if (back >=1){
			m1 =m1+1;
			back=back-1;
			continue;
		}
	}
	printf("\n\n\n������`�B�G%d \n",totalback);
	printf("�Բӭ��B�M��:1000��%d�i 500��%d�i 100��%d�i 50��%d�i 10��%d�i 5��%d�i 1��%d�i\n",m1000,m500,m100,m50,m10,m5,m1);
	system("pause");
	return 0;
}
