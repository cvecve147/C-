#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int b;
	int c;
	printf("�п�J�Ĥ@��");
	scanf("%d",&a);
	printf("�нп�J�ĤG��");
	scanf(" %d",&b);
	printf("�п�J�ĤT��");
	scanf(" %d",&c);
	
	printf ("A=%d B=%d C=%d\n",a,b,c);
	
	if (a+b>c || a+c>b || c+b>a )
	{
		printf("�i�e�T����");
	}
	else 
	{
		printf("���i��"); 
	}
		
	system("pause");
	return 0;
}
