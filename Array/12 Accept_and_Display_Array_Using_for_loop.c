

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Marks[10] = {'\0'}, i = 0;

        for(i = 0; i < 5; i++)
        {
                printf("\n\n Enter Marks Of %d Student = ",i+1);
                scanf("%d",&Marks[i]);
        }

        getch();
        system("cls");

        printf("\n\n *************************************");

        for(i = 0; i < 5; i++)
        {
                printf("\n\n Marks Of %d Student = %d",i+1,Marks[i]);
        }
        printf("\n\n *************************************");

        printf("\n\n Thanks !!! \n");

        getch();
        return 0;
}