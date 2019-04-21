#include<stdio.h>
 int main ()
 {
     char grade;
     printf("enter the any code");


     scanf("%c",&grade);
     switch (grade)
     {
     case '61' :
        printf("BRASILA");
        break;
        case 'B' :
        printf("ball");
        break;
        case 'C' :
        printf("cat");
        break;
        case 'D' :
        printf("dolpin");
        break;
        default :
            printf("INVAILED");

     }
     printf("\n thank you");
     return 0;
 }
