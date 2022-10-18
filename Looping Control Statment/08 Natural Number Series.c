

//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0,Cnt = 0;

    printf("\n Enter Any Number = ");
    scanf("%d",&Cnt);

     for(Num = 1;Num <= Cnt;Num ++)
     {
         printf("\n %d",Num ++);
     }

     printf("\n\n Thanks !!!!");

     getch();
     return 0;

}

