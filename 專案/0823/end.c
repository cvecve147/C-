#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int position=0;
int main (void)
{
	int password;
	printf("        ��J��Ы��Uenter\n");
	printf("�еy��\n");
	Sleep(3000);
	printf("�п�J�Ʀr �榡 dd mm�G"); 
	scanf("%d",&password);
	
	if(password==2308){
		printf("���ߧA�i�ӤF�A���ᦳ�Ӥp�C���C\n\n");
	}
	else{
		printf("�Q����H\n");
		printf("�A���ͤ�ոէa�I\n");
		printf("�ЦA��J�Ʀr �榡 dd/mm�G"); 
		scanf("%d",&password);
			if(password==2308){
				printf("���ߧA�i�ӤF�A���ᦳ�Ӥp�C���C\n\n");
		 	}
		 	else{
		 		printf("�A�O���H�H\n");
		 		printf("�A�դ@���a�I\n");
		 		printf("�ЦA��J�Ʀr �榡 dd/mm�G"); 
				scanf("%d",&password);
		 		if(password==2308){
				printf("���ߧA�i�ӤF�A���ᦳ�Ӥp�C���C\n\n");
		 		}	
		 		else{
		 			return 0;	 		
			 	}
			 }
	}
	
	printf("�еy��\n");	
	Sleep(1000);
	printf("           ��s�e����....");
	
	
	int sleep;
	for(sleep=0;sleep<=23;sleep++){
		printf("\n");
	}
	
	for(sleep=0;sleep<=5;sleep++){
		printf("\n");
		Sleep(800);
	}
	
	Sleep(1000);
	printf("    �A�n   �o�O�@�Ӥp�C���]���I�L��..)\n");
	Sleep(2000);
	
	printf("    �U�ϬO��5X5���a��  Y�O�A����m\n");
	
	
	char myposition [25]={'Y','@','@','@','@'
						  ,'@','@','@','@','@'
						  ,'@','@','@','@','@'
						  ,'@','@','@','@','@'
						  ,'@','@','@','@','H'};

    
	int i;	
	for(i=0;i<25;i++){
		printf("   %3c",myposition[i]);
			if(i%5==4){
				printf("\n");
			}
	}
	Sleep(2000);
	printf("     ����H�N�O�L��\n");
	char c;
		
	Sleep(3000);		
	int j=0;
	do{
			
		printf("�п�Jw a s d���O���W���U�k�G");
		scanf("%s",&c);
		
		if(c=='w' || c=='W'){
		
			position-=5;
			//printf("%d",position);
			if(position<0){
				position+=25;
			}					
		}
		if(c=='s' || c=='S'){
			position+=5;
			if(position>24){
				position-=25;
			}
			//printf("%d",position);
		}
		if(c=='a' || c=='A'){
			position-=1;
			if(position<=0){
				position+=25;
			}		
		//	printf("%d",position);
		}
		if(c=='d' || c=='D'){
			position+=1;
			if(position>24){
				position-=25;
			}
			//printf("%d",position);
		}
		
		printf("�A����ȡG%d\n\n",position);
					
		myposition[position]='Y';
	
		for(i=0;i<25;i++){
			printf("   %3c",myposition[i]);
			if(i%5==4){
				printf("\n");
			}
		}
		if(position==24){
			printf("���ߧAĹ�F\n");
			Sleep(2000);
		for(sleep=0;sleep<=23;sleep++){
				printf("\n");
			}	
			for(sleep=0;sleep<=5;sleep++){
				printf("\n");
				Sleep(800);
			}
			
			printf("    ��������~��������\n");
			printf("    ���������������\n");
			printf("    ������~�ССТ�������\n");
			printf("    �����~�D���D���D�������\n");
			printf("    ����~�D���D���D���D������\n");
			printf("    ����������墣����\n");
			printf("    ���� �U�C�ͤ�ּ֡C�U����\n");
			printf("    ���� �U�ססססססU����\n");
			printf("    ����w�w�w�w�w�w�w������\n");
			
			FILE *fp,*fp2;//�ѱK�I
			fp=fopen("1.txt","r");
			fp2=fopen("2.txt","w");
			if(fp==NULL &&fp2==NULL){
				printf("����");
				system ("pause");
				return;
			}
			else
			{
				char ch =fgetc(fp);
				while (ch!=EOF)
				{
					if(ch=='0'){
					fprintf(fp2,"\n");
					ch =fgetc(fp);
					printf("SOR");
				}
					else{
						putc(ch-1,fp2);
						ch =fgetc(fp);
					}			
				}
			Sleep(800);
			fclose(fp);
			fclose(fp2);
			printf("�{�b�i�h�ݬ�2.txt�o�I\n");
			}
			
			break;
		}
		
		j++;
	}while(j<=5);	
	
	
	system("pause");
	return 0;
}
