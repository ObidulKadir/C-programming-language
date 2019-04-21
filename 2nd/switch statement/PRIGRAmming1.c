#include<stdio.h>
int main()
{
    char grade;
    printf("enter the code");
    scanf("%c",&grade);
    switch (grade)
    {
    case 'B':
        printf("bangladesh");
        break;
        case 'D':
        printf("DAFFODDIL UNIVERSITY");
        break;
        case 'C':
        printf("CREATOR");
        break;
        case 'P':
        printf("PROGRAMMING");
        break;
        default:
            printf("INVALIED");

    }
    printf("I AM WAITING FOR THAT");
    return 0;
}
