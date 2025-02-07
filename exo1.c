#include<stdio.h>
int main()
{
  int a;
	printf("tapez un nombre entier de votre choix/n");
	scanf("%d",&a);
	if (a<0)
  {
  	printf("%d est negatif\n",a);
  	
  }
  	else
     {printf("%d est positive",a);
     }
     return (0);
     
}


