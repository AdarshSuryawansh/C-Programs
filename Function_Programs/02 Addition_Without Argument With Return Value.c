

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int Add()
{
    int No1 = 0, No2 = 0, Sum = 0;

    printf("\n Enter 1st Number = ");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number = ");
    scanf("%d",&No2);

    Sum = No1 + No2;

    return Sum;
}
int main()
{
    int Res;
    Res = Add();

    printf("\n Addition = %d",Res);

    printf("\n\n Thanks !!!\n");

    getch();
    return 0;
}