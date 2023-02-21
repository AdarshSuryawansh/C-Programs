

//Compiler version gcc  6.3.0
/// 06.Create,Accept,Display Array Using Loop - with macro,Search Given Element in that Array & Returns its Index If Found.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 10

int main()
{
        int Arr[Count] = {'\0'};
        int i = 0, S_Ele = 0;

        for(i = 0; i <= Count; i++)
        {
                printf("\n Enter Array Element %d = ",i+1);
                scanf("%d",&Arr[i]);
        }

        getch();
        system("cls");

        for(i = 0;i <= Count; i++)
        {
                printf("\n %d Array Element = %d",i+1,Arr[i]);
        }

        printf("\n\n Enter Element For Searching = ");
        scanf("%d",&S_Ele);

        for(i = 0; i <= Count; i++)
        {
                if(Arr[i] == S_Ele)
                {
                    break;
                }
        }
        if(i <= Count)
        {
            printf("\n %d is Fount at Index %d",S_Ele,i+1);
        }
        else
        {
            printf("\n %d is Not Found at any index",S_Ele);
        }

        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}