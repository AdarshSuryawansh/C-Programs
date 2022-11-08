

//Compiler version gcc  6.3.0

#include<stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
        int Roll_No;
        char Name[20];
        char City[9];
        float Per;
};

int main()
{
        struct student std1, std2;

        std1.Roll_No = 162;
        strcpy(std1.Name,"Adarsh");
        strcpy(std1.City,"Karad");
        std1.Per = 80.34;

        printf("\n Enter Roll Number = ");
        scanf("%d",&std2.Roll_No);

        fflush(stdin);
        printf("\n Enter Name = ");
        gets(std2.Name);

        printf("\n Enter City Name = ");
        gets(std2.City);

        fflush(stdin);

        printf("\n Enter Percentage = ");
        scanf("%f",&std2.Per);

        printf("\n\n Student Details Given are => \n\n Roll No = %d. \n Name = %s. \n City = %s. \n Percentage = %0.2f. ",std1.Roll_No,std1.Name,std1.City,std1.Per);
        printf("\n\n Student Details Given are => \n\n Roll No = %d. \n Name = %s. \n City = %s. \n Percentage = %0.2f. ",std2.Roll_No,std2.Name,std2.City,std2.Per);

        printf("\n\n Thanks !!!\n");
        
        getch();
        return 0;
}