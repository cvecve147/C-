#include <stdlib.h>
#include <stdio.h>

void main ()
{
	char str;
	FILE *fp;
	fp=fopen("2.txt","r");
	if(fp==NULL){
		printf("����");
		
		system ("pause");
		return;
	}
	else
	{
		char ch =fgetc(fp);
		while (ch!=EOF)
		{
			putchar(ch-1);  //������X 
			ch =fgetc(fp);
		}
	}
	
	system("pause");
}
