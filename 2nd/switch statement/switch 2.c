#include<stdio.h>
int main()
    {
        char grade;
        printf("enter the code");
        scanf("%c",&grade);
        switch(grade)
        {
        case 'BRAZIL' :
            printf("65");
            break;
        default :
            printf("DDD naocadastrado");
        }
        return 0;
    }
