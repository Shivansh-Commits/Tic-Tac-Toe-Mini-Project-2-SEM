#include <stdlib.h>  //Inclusion of Header Files
#include <time.h>
#include<stdio.h>
#include<string.h>
// Generates and prints 'count' random
// numbers in range [lower, upper].
void printRandoms(int lower, int upper,int count)
{
    int i;
    for (i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
}

void main()
{   int i,j,k,c=0,n1,n2,w,flag=1,temp,call1=10,call2=20,t=0;
    char a[9]={1,2,3,4,5,6,7,8,9},pp1[20],pp2[20];
    printf("\n");
    printf("_______________________________________________________________________________________________________________________");
    printf("___________________________________________:: :: :: :: TIC TAC TOE :: :: :: ::___________________________________________");printf("\n");
    printf("Enter PLAYER 1 Name:");gets(pp1);
    printf("Enter PLAYER 2 Name:");gets(pp2);printf("\n");
    printf("\t\t\t\t\t\t :: :: INSTRUCTIONS :: ::");printf("\n");printf("\n");
    printf("(1).Press that number on the Grid where you want X or O to be written");printf("\n");printf("\n");
    printf("(2).Player 1 and Player 2 Will Play Alternatively");printf("\n");printf("\n");
    printf("(3).");
    strupr(pp1);puts(pp1);
    printf("    Has been assigned >  X  <");printf("\n");printf("\n");
    printf("(4).");
    strupr(pp2);puts(pp2);
    printf("    Has been assigned >  O  <");printf("\n");printf("\n");
    printf("Start The Game >>>");printf("\n");printf("\n");
  for(i=1;i<=3;i++)//Initial Display
    {  for(j=1;j<=11;j++)
       {  if(j==4||j==8)
          {  printf("|");
          }
          else
          { if(j==2||j==6||j==10)
              {  printf("%d",a[c]);
                   c++;
              }
              else
              printf(" ");
          }
       }
       printf("\n");
       for(k=1;k<=11;k++)
       {  if(t<2)
           {  if(k%4!=0)
               {  printf("-");
               }
           else
               {  printf(" ");
               }
           }
       }
       printf("\n");
       t++;
    }
c=0;
t=0;
for(w=1;w<=10;w++)
{   printf("\n");
    printf("\n");
if(a[0]==call1&&a[4]==call1&&a[8]==call1||a[2]==call1&&a[4]==call1&&a[6]==call1||a[0]==call1&&a[1]==call1&&a[2]==call1||a[3]==call1&&a[4]==call1&&a[5]==call1||a[6]==call1&&a[7]==call1&&a[8]==call1||a[0]==call1&&a[3]==call1&&a[6]==call1||a[2]==call1&&a[5]==call1&&a[8]==call1||a[1]==call1&&a[4]==call1&&a[7]==call1)
{   printf("\t");puts(pp1);
    printf("\t");printf("Winss!!");
    printf("\n");
    printf("\t");printf("GAME ENDS");
    printf("\n");
    printf("\n");
    break;
}
else
{   if(a[0]==call2&&a[4]==call2&&a[8]==call2||a[2]==call2&&a[4]==call2&&a[6]==call2||a[0]==call2&&a[1]==call2&&a[2]==call2||a[3]==call2&&a[4]==call2&&a[5]==call2||a[6]==call2&&a[7]==call2&&a[8]==call2||a[0]==call2&&a[3]==call2&&a[6]==call2||a[2]==call2&&a[5]==call2&&a[8]==call2||a[1]==call2&&a[4]==call2&&a[7]==call2)
    {    printf("\t");puts(pp2);
         printf("\t");printf("Winss!!");
         printf("\n");
         printf("\t");printf("GAME ENDS");
         printf("\n");
         printf("\n");
         break;
    }
}
if(w>9)
    {
        printf("ITS A DRAW, YOU'VE BOTH GOT SKILLS!!");
        printf("\n");
        printf("\n");
        break;
    }
if(flag==1)
    {   printf("Player 1: ");
        scanf("%d",&n1);
        if(n1<0||n1>9)
        {
          printf("Enter valid Index");
          scanf("%d",&n1);
        }

        printf("\n");
        flag=0;
        a[n1-1]=call1;
    }
    else
    {   printf("Player 2: ");
        scanf("%d",&n1);
        if(n1<0||n1>9)
        {
          printf("Enter valid Index");
          scanf("%d",&n1);
        }
        printf("\n");
        flag=1;
        a[n1-1]=call2;
    }
   for(i=1;i<=3;i++)
    { for(j=1;j<=11;j++)
       { if(j==4||j==8)
          {  printf("|");
          }
        else
          {   if(j==1||j==3||j==5||j==7||j==9||j==11)
              {   printf(" ");
              }
              if(j==2||j==6||j==10)
              {
                 if(a[c]==call1)
              {   printf("X");
                  c++;
              }
              else if(a[c]==call2)
              {   printf("O");
                  c++;
              }
              else
              {   printf("%d",a[c]);
                  c++;
              }
              }
           }
       }
       printf("\n");
       for(k=1;k<=11;k++)
       {  if(t<2)
           {  if(k%4!=0)
               {  printf("-");
               }
              else
               {  printf(" ");
               }
           }
       }
       printf("\n");
       t++;
    }
    c=0;
    t=0;
}
}

