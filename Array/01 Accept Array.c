//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[5] = {},i = 0;

    for(i = 0;i<5;i++)
    {
        printf("\n Enter Elements = %d ",i+1);
        scanf("%d",&Arr[i]);
    }

    printf("\n Display Element is =\n");

    for(i = 0;i<5;i++)
    {
        printf("\n Elemnts is = %d",Arr[i]);
    }
    getch();
    return 0;


}