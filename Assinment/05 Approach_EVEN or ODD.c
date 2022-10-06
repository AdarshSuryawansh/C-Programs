#include<stdio.h>
#include<conio.h>
int main()
{

    int Num=0;

    printf("\n Enter an enteger to check whether EVEN or ODD=");
    scanf("%d",&Num);

    if(Num==0)
    {
        printf("\n Given number is Neutral.");
    }
    else if(Num%2==0)
    {
        printf("\n Given number is EVEN.");
    }
    else
    {
        printf("\n Given number is ODD.");
    }
        printf("\n\t Thanks!!!!");

        getch();
        return 0;
}
