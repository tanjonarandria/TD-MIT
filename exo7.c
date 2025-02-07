#include<stdio.h>
 int main()
 {
 int a,b,c,max;
 printf("entrer la valeur de a\n");
 scanf("%d",&a);
max=a;
printf("entrer la valeur de b\n");
scanf("%d",&b);
if (max<b)
{
  max=b;
}
printf("entrer la troixième valeur\n");
scanf("%d",&c);
if (c>max)
{max=c;
}
printf("le maximum est %d\n",max);
return (0);
}
