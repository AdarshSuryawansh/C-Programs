

//Compiler version gcc  6.3.0
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 20;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;

    printf("\n Value Of No = %d",No);
    printf("\n Value Of p = %d",p);
    printf("\n Value Of q = %d",q);
    printf("\n Value Of r = %d",r);
    printf("\n Value Of s = %d",s);

    printf("\n\n Address Of No = %d",&No);
    printf("\n Address Of p = %d",&p);
    printf("\n Address Of q = %d",&q);
    printf("\n Address Of r = %d",&r);
    printf("\n Address Of s = %d",&s);

    printf("\n\n Value Of *p = %d",*p);
    printf("\n Value Of **q = %d",**q);
    printf("\n Value Of ***r = %d",***r);
    printf("\n Value Of ****s = %d",****s);

    printf("\n\n Value Of *p = %d",&(*p));
    printf("\n Value Of **q = %d",&(**q));
    printf("\n Value Of ***r = %d",&(**q));
    printf("\n Value Of ****s = %d",&(**q));

    printf("\n\n Thanks !!!\n");

    getch();
    return 0;
}
