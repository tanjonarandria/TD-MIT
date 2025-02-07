#include<stdio.h>
int main()
{
      int a,b,c,d;
      printf("tapez la valeur de a\n");
      scanf("%d",&a);
      printf("tapez la valeur de b\n");
      scanf("%d",&b);
      printf("tapez la valeur de c\n");
      scanf("%d",&c);
      d=a;
      a=b;
      b=c;
      c=d;
      printf("a=%d,b=%d,c=%d\n",a,b,c);
      return (0);
      
}      
