#include<stdio.h>

int main(int argc, char *argv[])
{
	   int i,n,s,p;
	   printf(" entrer un nombre\n");
	   scanf("%d",&n);
	   s=0;
	   p=1;
	   for ( i=1;i<=n;i++)
	    {     
	         p=p*i;
	         s=s+p;
	        
         }
       printf("la somme s=%d\n",s);
       return (0);
}

