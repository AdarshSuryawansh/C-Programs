#include<stdio.h>
#include<stdio.h>
int main()
{
    float Amount=0.0;

    printf("\n Enter Your Account Balance=");
    scanf("%f",&Amount);

    if(Amount>1000)
    {
        printf("\n\n\t WELCOME To Mall !!! \n");

        if(Amount>10000)
        {
            printf("\n\n\t You Can Be Prime Member Of This Mall !!!");
        }
           printf("\n\n\t Have a Nice Shooping !!! ");
    }
    else
    {
        printf("\n\n\t Minimum Balance required To Shop Here is 1000+\n");

        if(Amount>500)
        {
            printf("\t But You Can Visit Our Outlet at Corner !!!\n");
        }
        else
        {
            printf("\n\t You Are Not Eligibal To Shop!!!");
        }

    }
    printf("\n\n Thanks For Visit !!!");

    getch();
    return 0;
}
