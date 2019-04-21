
#include <stdio.h>

int main()
{
    int i;

    printf("All odd numbers from 1 to 100 are: \n");

    /*
     * Starts a loop from 1 and increments it by 2
     * And in each repetition prints the number
     */
    for(i=1; i<=100; i+=2)
    {
        printf("%d\n",i);
    }

    return 0;
}
