#include<stdio.h>
int main()
{
    int i,even=0,odd=0;
    for (i=0;i<=10;i++)

  if(i%2==0)
  {even=even+i;
  printf("%d-e\n",even);
}

  else

    {

      odd=odd+i;
      printf("%d-o\n",odd);

  }
printf("summ of even%d,sum of odd %d",even,odd);

    return 0;
    }
