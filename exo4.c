#include<stdio.h>
int main()
{
        float a,b,s,m;
        printf("entrer la première note\n");
        scanf("%f",&a);
        printf("entrer la deuxiéme note\n");
        scanf("%f",&b);
        s=a+b;
        printf("la somme s=%f\n",s);
        m=s/2;
        printf("la moyenne m=%f\n",m);
        return (0);
}       

