#include<stdio.h>
int check(int n)
{ int n;
  if (flag==0)
      printf("%d is a prime number.",n);
  else
      printf("%d is not a prime number.",n);
}
  int main()
{
    int  i, flag=0,n;
  printf("Enter a positive integer: ");
  scanf("%d",&n);
  check(n);

  for(i=2;i<=n/2;++i)
  {
      if(n%i==0)
      {
          flag=1;
          break;
      }
  }
}
