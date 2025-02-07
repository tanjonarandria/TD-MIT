#include<stdio.h>

int main(int argc, char *argv[])
{
	   float i,n,s,p;
	   printf("entrer un nombre\n");
	   scanf("%f",&n);
	   s=0;
	   p=1;
	   for (i=1;i<=n;i++)
	   {
	          p=i*p;
	          s=s+1/p;
	   }
	   printf("la somme s= %f",s);
	   return(0);
}

