#include <stdio.h>
#include <stdlib.h>
int main (void)
{
	int j;
	int a=0,e=0,i=0,o=0,u=0;
	int cnt;
	
	char str[100000]="";
	
	printf("�п�J�^��G");
	scanf("%s",&str);
	
	printf("�A��J���^��%s  \n",str);
	
	while(str[j++]!='\0'){
		cnt++;
	}
	printf("cnt=%d\n",cnt);
		
	for(j=0;j<cnt;j++){
		if(str[j]=='a'){
			a++;
		}
		 if(str[j]=='e'){
			e++;
		}
		if(str[j]=='i'){
			i++;
		}
		if(str[j]=='o'){
			o++;
		}
		if(str[j]=='u'){
			u++;
		}
	}
	
	
	printf("�`�@��%3d��a,%3d��e,%3d��i,%3d��o,%3d��u\n",a,e,i,o,u);
	
	system("pause");
	return 0;
	
}
