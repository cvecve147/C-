#include <Stdio.h>
#include <stdlib.h>
int main (void)
{
	FILE *f1;
	int num,i;
	f1=fopen("1.txt","w");
	if((f1!=NULL))
	{
		printf("OK");
		for(i=0;i<=10;i++){
			num=(rand()%64)+1;
			fprintf(f1,"%d ",num);
			printf(" ");
		}
		fclose(f1);
	}
	else {
		printf("¥¢±Ñ");
	}
	
	system("pause");
	return 0;
}
