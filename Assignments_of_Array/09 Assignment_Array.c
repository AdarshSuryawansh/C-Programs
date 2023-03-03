

//Compiler version gcc  6.3.0
/// 09.Create,Accept,Display Array Using Loop - with macro,Find Maximum Element in that Array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 10
int main()
{
        int Arr[Count] = {'\0'};
        int i = 0, Max_Ele = 0;

        for(i = 0; i <= Count; i++)
        {
                printf("\n Enter Array Element %d = ",i+1);
                scanf("%d",&Arr[i]);
        }

        getch();
        system("cls");

        for(i = 0; i <= Count; i++)
        {
                printf("\n %d Array Element = %d",i+1,Arr[i]);
        }

        for(i = 0; i <= Count; i++)
        {
                if(Arr[i] > Arr[i+1])
                {
                    Max_Ele = Arr[i];
                }
        }
        printf("\n\n Maximum Element = %d",Max_Ele);

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}