#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int prince;
	int money;
	printf("輸入商品價格：");
	scanf("%d",&prince);
	printf("輸入實際交給店員的金額：");
	scanf("%d",&money);
	int totalback;
	int back;
	int m1000=0,m500=0,m100=0,m50=0,m10=0,m5=0,m1=0;
	
	if(money<prince)
	{
		printf("----->金額不夠！！！\n");
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
	printf("\n\n\n應找錢總額：%d \n",totalback);
	printf("詳細面額清單:1000元%d張 500元%d張 100元%d張 50元%d張 10元%d張 5元%d張 1元%d張\n",m1000,m500,m100,m50,m10,m5,m1);
	system("pause");
	return 0;
}
