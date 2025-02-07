#include<stdio.h>
int main()
{
      int x,n,i;
      printf("entrer un nombre\n");
      scanf("%d",&n);
    
  for (i=n;1<=i;i--)
  {
      x=n%i;
   
   if (x==0)
   {
   printf("%d\n",i);
   }
   }
   return (0);
   }
