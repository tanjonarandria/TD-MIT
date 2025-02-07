#include<stdio.h>
int main()
{
    long i,n,m;
    printf("entrer un nombre\n");
    scanf("%ld",&n);
    m=1;
    for (i=1;i<=n;i++)
    {
    m=i*m;
    }
    printf("le facteur de %ld =%ld\n",n,m);
    return (0);
    
  }
  
 
  