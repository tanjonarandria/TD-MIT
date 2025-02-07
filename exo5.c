#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,x1,x2,p;
    
    printf("resolution d'une équation du second dégré ax^2+bx+c=o\n");
    printf("entrer la valeur de a\n");
    scanf("%f",&a);
    printf("entrer la valeur de b\n");
   scanf("%f",&b);
   printf("entrer la valeur de c\n");
   scanf("%f",&c);
   d=(b*b)-(4*a*c);
   if (d==0)
   {
     
        printf("il existe une racine double\n");
        x1=(-b)/(2*a);
        printf("x1=x2=%f\n",x1); 
      
   }
   else if (d>0)
   {
   printf("il existe 2 solution\n");
      x1=(-b+sqrt(d))/(2*a);
      x2=(-b-sqrt(d))/(2*a);
      printf(" x1=%f;x2=%f\n",x1,x2);
   }
   else 
   {
        printf("il existe des solutions dans C\n");
        d=sqrt(-d);
        p=(-b)/(2*a);
        d=d/(2*a);
        printf("x1=%f + %fi\n",p,d);
        printf("x2=%f -%fi\n",p,d);
   }
   return (0);
   }    
        
          
