#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char str[]="I don't konw";
	int i;
	
	printf("字串內容：%s\n",str);
	printf("---------------轉換大寫後---------------\n");
	for(i=0;i<sizeof(str);i++){
		if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}
	}
	
	printf("字串內容：%s\n",str);
	
	system("pause");
	return 0;
}
