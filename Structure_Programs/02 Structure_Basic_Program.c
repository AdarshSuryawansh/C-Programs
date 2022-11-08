

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
        struct student std1, std2, std3 = {162, "Adarsh","Mumbai",80.75};

        std1.Roll_No = 177;
        strcpy(std1.Name,"Aadii");
        strcpy(std1.City,"Karad");
        std1.Per = 78.56;

        printf("\n Enter Roll No = ");
        scanf("%d",&std2.Roll_No);

        fflush(stdin);

        printf("\n Enter Name = ");
        gets(std2.Name);

        printf("\n Enter City = ");
        gets(std2.City);

        fflush(stdin);

        printf("\n Enter Percentage = ");
        scanf("%f",&std2.Per);

        printf("\n\n 1st Student Details Given are => \n\n Roll No = %d. \n Name = %s. \n City = %s. \n Percentage = %0.2f. ",std1.Roll_No,std1.Name,std1.City,std1.Per);
        printf("\n\n 2nd Student Details Given are => \n\n Roll No = %d. \n Name = %s. \n City = %s. \n Percentage = %0.2f. ",std2.Roll_No,std2.Name,std2.City,std2.Per);
        printf("\n\n 3rd Student Details Given are => \n\n Roll No = %d. \n Name = %s. \n City = %s. \n Percentage = %0.2f. ",std3.Roll_No,std3.Name,std3.City,std3.Per);
        
        printf("\n\n Thanks !!!\n");

        getch();
        return 0;
}