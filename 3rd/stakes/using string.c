#include <stdio.h>
#include <string.h>



int main()
{
    char stk[10][20]={"Mamun","Sagor", "end"};
    int i=0;
    while(strcmp(stk[i], "end") != 0){
        printf("%s", stk[i]);
        i++;
    }
    printf("\n %d", i-1);

    return 0;

}
