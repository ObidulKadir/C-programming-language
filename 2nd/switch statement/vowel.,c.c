#include<stdio.h>
int main()
{
    char ch;
    printf("input the code");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
        case 'A':
            case 'I':
                case 'i':
                    case 'u':
                        case 'U':
                            printf("%c is vowel",ch);
                            break;
                        default :
                            printf("%c is not vowel",ch);

    }
    return 0;
}
