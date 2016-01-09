#include<stdio.h>
#include <stdlib.h>
int main (void)
{
	char arr[3][11]={"C language","C++","JAVA"};
	int i;
	for(i=0;i<3;i++){
		printf("arr[%d]=%p\n",i,arr[i]);
	}
	
	system("pause");
	return 0;
}
