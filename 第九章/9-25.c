#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	char str[]="I don't konw";
	int i;
	
	printf("�r�ꤺ�e�G%s\n",str);
	printf("---------------�ഫ�j�g��---------------\n");
	for(i=0;i<sizeof(str);i++){
		if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}
	}
	
	printf("�r�ꤺ�e�G%s\n",str);
	
	system("pause");
	return 0;
}
