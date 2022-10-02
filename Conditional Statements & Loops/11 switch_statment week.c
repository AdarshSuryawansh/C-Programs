
#include<stdio.h>
#include<conio.h>
int main()
{
      int Day=0;

      printf("\n Enter number of Week (1-7)=");
      scanf("%d",&Day);

      switch(Day)
      {
      case 1:
        printf("\n Monday");
        break;
      case 2:
        printf("\n Tuesday");
        break;
      case 3:
        printf("\n Wedensday");
        break;
      case 4:
        printf("\n Thrusday");
        break;
      case 5:
        printf("\n Friday");
        break;
      case 6:
        printf("\n Saturday");
        printf("\n Jay Hanuman");
        break;
      case 7:
        printf("\n sunday");
        break;
      default:
        printf("\n Invalid Day!!!!");
        break;
      }
        printf("\n\n Thanks!!!");

      getch();
      return 0;
}

