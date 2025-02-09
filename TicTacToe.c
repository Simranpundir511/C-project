#include <stdio.h>
#include <stdlib.h>
void showboard();
int checkforwin();

char arr[10]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
    int choice,i;
    int player=1;
    char mark;
    do{
     if (player%2==0){
          player=2;
     }
     else player=1;
     showboard();
    if (player==1)
      mark='X';
    else 
    mark='O';

         showboard();
     printf(" Player %d turn.Enter your choice:",player);
     scanf("%d",&choice);
        


    if (choice==1 && arr[1]=='1')
        arr[1]=mark;
   else if (choice==2 && arr[2]=='2')
        arr[2]=mark;
   else if (choice==3 && arr[3]=='3')
        arr[3]=mark;
   else if (choice==4 && arr[4]=='4')
        arr[4]=mark;
   else if (choice==5 && arr[5]=='5')
        arr[5]=mark;
   else if (choice==6&& arr[6]=='6')
        arr[6]=mark;
   else if (choice==7 && arr[7]=='7')
        arr[7]=mark;
   else if (choice==8 && arr[8]=='8')
        arr[8]=mark;
   else if (choice==9 && arr[9]=='9')
        arr[9]=mark;
  else {
    printf("Invalid Input..! Please enter valid number:");
    player--;
   }
    

   i=checkforwin();
   player++;


   }

while(i==-1);

showboard();
if (i==1){
     if (player%2!=0){
          player=2;
     }
     else player=1;
     printf("Congratulation player %d won",player);}
   else
     printf("Draw");



    return 0;
}

void showboard(){
     system("cls");
    printf("Welcome to the game:\n");
    printf("        |        |      \n");
    printf("        |        |      \n");
    printf("   %c    |   %c    |   %c  \n",arr[1],arr[2],arr[3]);
    printf("        |        |      \n");
    printf("--------|--------|--------\n");
    printf("        |        |      \n");
    printf("   %c    |   %c    |   %c  \n",arr[4],arr[5],arr[6]);
    printf("        |        |      \n");
    printf("--------|--------|--------\n");
    printf("        |        |      \n");
    printf("   %c    |   %c    |   %c  \n",arr[7],arr[8],arr[9]);
    printf("        |        |      \n");
}



int checkforwin(){
     if(arr[1]==arr[2]&&arr[2]==arr[3])
          return 1;
     else if(arr[4]==arr[5]&&arr[5]==arr[6])
          return 1;
     else  if(arr[7]==arr[8]&&arr[8]==arr[9])
          return 1;


     else if(arr[1]==arr[4]&&arr[4]==arr[7])
          return 1;
     else  if(arr[2]==arr[5]&&arr[5]==arr[8])
          return 1;
     else  if(arr[3]==arr[6]&&arr[6]==arr[9])
          return 1;

     else  if(arr[1]==arr[5]&&arr[5]==arr[9])
          return 1;
     else  if(arr[3]==arr[5]&&arr[5]==arr[7])
          return 1;


     else if
          (arr[1]!='1' && arr[2]!='2' && arr[3]!='3'
           && arr[4]!='4' && arr[5]!='5' &&  arr[6]!='6'  
           &&arr[7]!='7'  && arr[8]!='8' && arr[9]!='9')
           return 0;
     else 
          return -1;
}