#include <stdio.h>
#include <stdlib.h> 
int main (void)
{
	char str[100];
	
	printf("½Ğ¿é¤J¡G");
	gets(str);


	int i,n=0;
	while(str[i++]!='\0'){
		n++;
	}
	printf("str=%s  n=%d\n",str,n);
	
	for(i=n-1;i>=0;i--){
		putchar(str[i]);
	}
	

	system("pause");
	return 0;
}

