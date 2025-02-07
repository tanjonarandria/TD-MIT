#include<stdio.h>
float main()
{
      float a,b,c1,c2,n1,n2,n,m,c;
      printf("entrer la première note\n");
      scanf("%f",&a);
      printf("entrer son coefficient\n");
      scanf("%f",&c1);
      printf("entrer la deuxième note\n");
      scanf("%f",&b);
      printf("entrer son coefficient\n");
      scanf("%f",&c2);
      n1=a*c1;
      n2=b*c2;
      n=n2+n1;
      c=c1+c2;
      m=n/c;
      printf("m=%f\n",m);
      return (0);
}

      
