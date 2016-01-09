#include <stdio.h>
#include <stdlib.h>
void toLower(char str[]);
int main (void)
{
	char str[1000];
	
	printf("½Ð¿é¤J¡G");
	gets(str);
	toLower(str);
	
	system("pause");
	return 0;
}
void toLower(char str[])
{
	int i,n=0;
	while (str[i++]!='\0'){
		n++;
	}
	for(i=0;i<n;i++){
		if(str[i]>=97 && str[i]<=122){
			str[i]-=32;
		}
	}
	puts(str);
	
	return ;
}
