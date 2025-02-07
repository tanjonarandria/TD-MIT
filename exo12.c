#include<stdio.h>
int main()
{ 
      int n,i,s;
      printf("entrer un nombre\n");
      scanf("%d",&n);
      s=0;  
      for(i=1;i<=n;i++)
      {   
         s=s+i;
      }
      printf("la somme de 1 jusqu'a %d=%d\n",n,s);
      return (0);
}

