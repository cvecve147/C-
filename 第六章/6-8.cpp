#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	int b;
	int c;
	
	printf ("請輸入第一個邊");
	scanf("%d",&a);
	printf ("請輸入第二個邊");
	scanf("%d",&b);
	printf ("請輸入第三個邊");
	scanf("%d",&c);
	if (a+b>c || a+c>b || c+b>a)
	{
	if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c ==a*a)
	printf("直三角形");
	else if (a*a+b*b<c*c || a*a+c*c<b*b || b*b+c*c<a*a)
	printf("鈍角三角形");
	else if (a*a+b*b>c*c || a*a+c*c>b*b || b*b+c*c>a*a)
	printf ("銳角三角形");
	}
	else 
	printf ("不是三角形");
	
	system("pause");
	return 0;
}
