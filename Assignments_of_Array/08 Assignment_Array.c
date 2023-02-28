

//Compiler version gcc  6.3.0
/// 08.Create,Accept,Display Array Using Loop - with macro,Find Count of Given Element in that Array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 10

int main()
{
        int Arr[Count] = {'\0'};
        int i = 0, G_Ele = 0, Cnt = 0;

        printf("\n\n==========================================================");
        printf("\n\n Enter Array Elements => \n");

        for(i = 0; i <= Count; i++)
        {
                printf("\n Enter Array Element %d = ",i+1);
                scanf("%d",&Arr[i]);
        }

        getch();
        system("cls");
        
        printf("\n\n==========================================================\n");

        for(i = 0;i <= Count; i++)
        {
                printf("\n %d Array Element = %d",i+1,Arr[i]);
        }
        printf("\n\n==========================================================");

        printf("\n\n Enter Element For Finding Count of Element = ");
        scanf("%d",&G_Ele);

        for(i = 0; i <= Count; i++)
        {
                if(Arr[i] == G_Ele)
                {
                    Cnt++;
                }
        }
        printf("\n Count Of %d = %d",G_Ele,Cnt);

        printf("\n\n==========================================================");
        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}