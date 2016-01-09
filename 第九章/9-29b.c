#include<stdio.h>
#include <stdlib.h>
int main (void)
{
	char arr[][11]={"C language","C++","JAVA"};
	int j;


	for(j=0;j<sizeof(arr)/11;j++){
		puts(arr[j]);
	}
		
	printf("\n");

	
	system("pause");
	return 0;
}
