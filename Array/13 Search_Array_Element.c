

//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>

int main()
{
        int Arr[7] = {'\0'}, i= 0, Search_Ele = 0;

        printf("\n\n Enter Array Elements ==>");

        for(i = 0; i < 7; i++)
        {
                printf("\n\n Enter %d Element = ",i+1);
                scanf("%d",&Arr[i]);
        }

        printf("\n\n Enter Element For Search = ");
        scanf("%d",&Search_Ele);

        for(i = 0; i < 7; i++)
        {
                if(Arr[i] == Search_Ele)
                {
                    break;
                }
        }
        if(i < 7)
        {
                printf("\n\n Search Element is Found at Location %d",i);
        }
        else
        {
                printf("\n\n Search Element is Not Found at any Location");
        }

        printf("\n\n Thanks !!! \n");

        getch();
        return 0;
}