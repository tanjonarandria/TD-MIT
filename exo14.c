#include<stdio.h>
int main(int argc, char *argv[])
{
        
   	 float i,n,s;
     	printf("tapez un nombre\n");
     	scanf("%f",&n);
     	s=0;
     	for (i=1;i<=n;i++)
     {     s=s+(1/i);
     
     }
     printf("la somme s=%f \n",s);
          return (0);
}

