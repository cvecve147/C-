#include <stdio.h>
#include <stdlib.h>
int main (void)
{

	int arr[3];
	
	int i=0;	
	for (i=0;i<=2;i++){
		printf("�п�J%d��",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<=2;i++)
	{
		printf("arr{%d}={%d}",i,arr[i]);
	}
	
	system("pause");
	return 0;
}
