#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int b;
	int c;
	
	printf ("�п�J�Ĥ@����");
	scanf("%d",&a);
	printf ("�п�J�ĤG����");
	scanf("%d",&b);
	printf ("�п�J�ĤT����");
	scanf("%d",&c);
	if (a+b>c || a+c>b || c+b>a)
	{
	if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c ==a*a)
	printf("���T����");
	else if (a*a+b*b<c*c || a*a+c*c<b*b || b*b+c*c<a*a)
	printf("�w���T����");
	else if (a*a+b*b>c*c || a*a+c*c>b*b || b*b+c*c>a*a)
	printf ("�U���T����");
	}
	else 
	printf ("���O�T����");
	
	system("pause");
	return 0;
}
