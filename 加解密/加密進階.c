#include <stdlib.h>
#include <stdio.h>

void main ()
{
	FILE *fp,*fp2;
	fp=fopen("2.txt","r");
	fp2=fopen("1.txt","w");
	if(fp==NULL &&fp2==NULL){
		printf("¥¢±Ñ");
		
		system ("pause");
		return;
	}
	else
	{
		char ch =fgetc(fp);
		while (ch!=EOF)
		{
		
			putc(ch+1,fp2);
			ch =fgetc(fp);
		}
		fclose(fp);
		fclose(fp2);
		printf("OK");
	}
	
	system ("pause");	
}
