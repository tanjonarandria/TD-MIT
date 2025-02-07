
#include<stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
        int i,n,s ;
        printf("tapez un nombre\n");
        scanf("%d",&n);
        s=0;
        for (i=0;i<=n;i++ )
    {
               s=s+pow(10,i);
    }
          printf("la somme s=%d",s);

	return (0);
}

