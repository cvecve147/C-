#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int a;
	
	printf("請輸入數字1~4:");
	scanf("%d",&a);
	
	switch(a)
	{
    case 1:
	printf("春天");
	break;
	case 2:
	printf("夏天");
	break;
	case 3:
	printf("秋天");
	break;
	case 4:
	printf("冬天");
	break;
	default:
	printf("輸入錯誤");
	}
	system("pause");
	return 0;
}
