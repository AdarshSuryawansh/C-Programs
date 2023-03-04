

//Compiler version gcc  6.3.0
// Create, Accept, Display Array Using Loop - with macro, Find Minimum Element in that array.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define Count 10
int main()
{
        int i = 0, Min_Ele = 0;
        int Arr[Count] = {'\0'};

        printf("\n Enter Array Elements => \n");
        for(i = 0; i <= Count; i++)
        {
                printf("\n Enter %d Array Element = ",i+1);
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
                if(Arr[i+1] > Arr[i])
                {
                    Min_Ele = Arr[i];
                }
        }
        printf("\n\n Minimum Element in Given Array is = %d",Min_Ele);
        printf("\n\n Thanks!!!\n");

        getch();
        return 0;
}
