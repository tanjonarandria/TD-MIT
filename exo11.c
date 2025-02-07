#include<stdio.h>
int main()
{
    long i,n,f;
    printf("entrer un nombre\n");
    scanf("%ld",&n);
    f=1;
    for (i=n;i>0;i--)
    {
    f=i*f;
    }
    printf("le facteur de %ld =%ld\n",n,f);
    return (0);
    
  }
  

