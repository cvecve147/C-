#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int sum;
	
	printf("�п�J�A���ɼ�");
	scanf("%d",&a);
	if (a<=60)
	{
	sum=a*75;
	printf("�A���~���O�G%d\n",sum); 
    }
	if (a>60 && a<=75)
	{
	
	sum=60*75+(a-60)*(75*1.25);
	printf("�A���~���O�G%d\n",sum);
    }
	if (a>75)
	{
	sum=60*75+15*(75*1.25)+(a-75)*(75*1.75);
	printf("�A���~���O�G%d\n",sum); 
    }
	system("pause");
	return 0;	
}
