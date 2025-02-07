#include<stdio.h>
#include<stdlib.h>
int main()
{ 
  int a,b;
  printf("tapez le premier nombre\n");
  scanf("%d",&a);
  printf("tapez le deuxième nombre\n");
  scanf("%d",&b);
  
  if((a<0)&&(b<0))
  {
      printf("a*b est positif\n");
  }
  else if ((a>0)&&(b>0))
  {
      printf("a*b est positif\n");
  }
  else 
  {
      printf("a*b est negatif\n");
  }
  return (0);
  
}


