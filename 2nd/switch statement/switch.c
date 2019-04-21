#include<stdio.h>

int main()
{
    char grade;
    printf("enter any code");
    scanf("%c",&grade);
    switch (grade)
    {
        case 'N':
        printf("NEW");
        break;
        case 'O':
        printf("open");
        break;
        case 'S':
        printf("save");
        break;
        case 'E':
        printf("exits");
        break;
        default :
        printf("invalied");

    }
    printf("\n thank you");
    return 0;

}
