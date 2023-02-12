

//Compiler version gcc  6.3.0
/// 04.Create Array Of 7 Elements With Null(0) Initialization & Accept All Elements Without Loop Display All Elements.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
        int Arr[7] = {'\0'};

        printf("\n\n Enter 1st Element = ");
        scanf("%d",&Arr[0]);

        printf("\n\n Enter 2nd Element = ");
        scanf("%d",&Arr[1]);

        printf("\n\n Enter 3rd Element = ");
        scanf("%d",&Arr[2]);

        printf("\n\n Enter 4th Element = ");
        scanf("%d",&Arr[3]);

        printf("\n\n Enter 5th Element = ");
        scanf("%d",&Arr[4]);

        printf("\n\n Enter 6th Element = ");
        scanf("%d",&Arr[5]);

        printf("\n\n Enter 7th Element = ");
        scanf("%d",&Arr[6]);

        getch();
        system("cls");

        printf("\n\n Enter 1st Element = %d",Arr[0]);
        printf("\n\n Enter 2nd Element = %d",Arr[1]);
        printf("\n\n Enter 3rd Element = %d",Arr[2]);
        printf("\n\n Enter 4th Element = %d",Arr[3]);
        printf("\n\n Enter 5th Element = %d",Arr[4]);
        printf("\n\n Enter 6th Element = %d",Arr[5]);
        printf("\n\n Enter 7th Element = %d",Arr[6]);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}