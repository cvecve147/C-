#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int position=0;
int main (void)
{
	int password;
	printf("        輸入後請按下enter\n");
	printf("請稍後\n");
	Sleep(3000);
	printf("請輸入數字 格式 dd mm："); 
	scanf("%d",&password);
	
	if(password==2308){
		printf("恭喜你進來了，之後有個小遊戲。\n\n");
	}
	else{
		printf("想不到？\n");
		printf("你的生日試試吧！\n");
		printf("請再輸入數字 格式 dd/mm："); 
		scanf("%d",&password);
			if(password==2308){
				printf("恭喜你進來了，之後有個小遊戲。\n\n");
		 	}
		 	else{
		 		printf("你是本人？\n");
		 		printf("再試一次吧！\n");
		 		printf("請再輸入數字 格式 dd/mm："); 
				scanf("%d",&password);
		 		if(password==2308){
				printf("恭喜你進來了，之後有個小遊戲。\n\n");
		 		}	
		 		else{
		 			return 0;	 		
			 	}
			 }
	}
	
	printf("請稍後\n");	
	Sleep(1000);
	printf("           更新畫面中....");
	
	
	int sleep;
	for(sleep=0;sleep<=23;sleep++){
		printf("\n");
	}
	
	for(sleep=0;sleep<=5;sleep++){
		printf("\n");
		Sleep(800);
	}
	
	Sleep(1000);
	printf("    你好   這是一個小遊戲（有點無聊..)\n");
	Sleep(2000);
	
	printf("    下圖是個5X5的地圖  Y是你的位置\n");
	
	
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
	printf("     走到H就是過關\n");
	char c;
		
	Sleep(3000);		
	int j=0;
	do{
			
		printf("請輸入w a s d分別為上左下右：");
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
		
		printf("你的位值：%d\n\n",position);
					
		myposition[position]='Y';
	
		for(i=0;i<25;i++){
			printf("   %3c",myposition[i]);
			if(i%5==4){
				printf("\n");
			}
		}
		if(position==24){
			printf("恭喜你贏了\n");
			Sleep(2000);
		for(sleep=0;sleep<=23;sleep++){
				printf("\n");
			}	
			for(sleep=0;sleep<=5;sleep++){
				printf("\n");
				Sleep(800);
			}
			
			printf("    ∴∴∵∴∴∵∴╭∴∵∴∴∴∴∵\n");
			printf("    ∴∴∵∴∵∵∴●∴∵∴∴∴∴∵\n");
			printf("    ∴∴∵∵∴╭－－－╮∴∴∴∴∵\n");
			printf("    ∴∴∵∵╭．★．☆．╮∴∴∴∵\n");
			printf("    ∴∴∵╭．●．○．●．╮∴∴∵\n");
			printf("    ∴∴∵╰～～～～～～∪╯∴∴∵\n");
			printf("    ∴∴∵ ｜。生日快樂。｜∴∴∵\n");
			printf("    ∴∴∵ ｜＝＝＝＝＝＝｜∴∴∵\n");
			printf("    ∴∴∵╰───────╯∴∴∵\n");
			
			FILE *fp,*fp2;//解密！
			fp=fopen("1.txt","r");
			fp2=fopen("2.txt","w");
			if(fp==NULL &&fp2==NULL){
				printf("失敗");
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
			printf("現在可去看看2.txt囉！\n");
			}
			
			break;
		}
		
		j++;
	}while(j<=5);	
	
	
	system("pause");
	return 0;
}
