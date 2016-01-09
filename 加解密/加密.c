#include <stdio.h>
#include <stdlib.h>

int main (void){
	char str[1000];
	scanf("%s",str);
	char *p=str;
	while (*p!='\0'){
		putchar(*p+1);
		p++;
	}
}
