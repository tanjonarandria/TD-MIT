#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
 	int x,y,z,a,b,w;
     printf("entrer le premier nombre\n");
     scanf("%d",&x);
     printf("tapez le deuxième nombre\n");
     scanf("%d",&y);
     b=x;
     w=y;

  if (y>x)
  
{
     a=x;
     x=y;
     y=a;
  
 }
 do 
 {  
      z=x%y;
      x=y;
      y=z;}
     while ((z>0)); 
     
                printf("pgcd(%d ,%d)=%d",b,w,x);
 	return 0;
}


