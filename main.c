//#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <windows.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int position=0;
int main (void)
{
	/*int password;
	printf("        輸入後請按下enter\n");
	printf("請稍後\n");
	Sleep(5000);
	printf("請輸入數字 格式 dd/mm："); 
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
	}*/
	
	printf("請稍後\n");	
	Sleep(2000);
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
	int j;
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
			
			/*FILE *fptr;
			fptr=fopen("end.txt","r");
			if(fptr!=NULL){
				char str[1000];
				scanf("%s",str);
				fptr=fopen("end.txt","w");
				if(fptr!=NULL){
					char *p=str;
					while (*p!='\0'){
						putchar(*p-1);
						p++;
					}
				}
				else{
					printf("有問題");
				}
			}
			else {
				printf("SOR");
			}
							
				/*for(sleep=0;sleep<=23;sleep++){
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
			*/
			break;
		}
		
		j++;
	}while(j<=5);	
	
	system("pause");
	return 0;
}
