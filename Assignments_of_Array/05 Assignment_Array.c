

//Compiler version gcc  6.3.0
/// 05.Create Array Of 7 Elements With Null(0) Initialization, Accept & Display All Elements With Loop.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Arr[7] = {'\0'}, i = 0;

        for(i = 0; i < 7; i++)
        {
                printf("\n\n Enter %d Element = ",i+1);
                scanf("%d",&Arr[i]);
        }

        getch();
        system("cls");

        printf("\n\n *************************************");

        for(i = 0; i < 7; i++)
        {
                printf("\n\n The %d Element = %d",i+1,Arr[i]);
        }

        printf("\n\n *************************************");

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}
