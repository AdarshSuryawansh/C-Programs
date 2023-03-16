

//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>

int main()
{
    int Num1 = 0, Num2 = 0;
    int *ptr1 = &Num1;
    int *ptr2 = &Num1;

    printf("\n Enter Number = ");
    scanf("%d",&Num1);
    printf("\n Enter Number = ");
    scanf("%d",&Num2);

    printf("\n\n ============================================================");

    printf("\n\n Value Of Num1 = %d",Num1);
    printf("\n Value Of Address Of Num1 = %d",&Num1);
    printf("\n\n Value Of Num2 = %d",Num2);
    printf("\n Value Of Address Of Num2 = %d",&Num2);
    printf("\n\n Value Of ptr1 = %d",ptr1);
    printf("\n Value Of Address Of ptr1 = %d",&ptr1);
    printf("\n\n Value Of ptr2 = %d",ptr2);
    printf("\n Value Of Address Of ptr2 = %d",&ptr2);
    printf("\n\n Value Of Variable pointed to by ptr1 = %d",*ptr1);
    printf("\n Value Of Address Of Vaiable pointed to by ptr1 = %d",&(*ptr1));
    printf("\n\n Value Of Variable pointed to by ptr2 = %d",*ptr2);
    printf("\n Value Of Address Of Vaiable pointed to by ptr2 = %d",&(*ptr2));

    printf("\n\n ============================================================");

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}