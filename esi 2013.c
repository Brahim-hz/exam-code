#include<stdio.h>
#define ta 100
int main()
{
    int n,a,cpt,cptt,i,t[ta],som,ii;
    printf("donner la valeur de N \t");
    scanf("%d",&n);
    a=n;
    cpt=0;
    cptt=0;
    i=0;
    t[i]=n;
    i++;
    som=0;
    while(cptt=1)
    {
        som=0;
        for(ii=0;i<=(a/2);i++)
        {
            if((n%ii)==0)
            {
                som=som+ii;
            }
        }
        a=som;
        printf("som est %d \n ",som);
        t[i]=a;
        i++;
        if(som=1)
        {
            cptt=1;
        }
        if(som=n)
        {
            cptt=1;
        }
    }
    printf("\n \n \n");
    printf("la suite aliquote:");
    for(ii=0;ii<i;ii++)
    {
        printf("%d,",t[ii]);
    }
    if(((i-1)==1)&&(a==n))
    {
        printf("N est premier");
    }
    if(a==n)
    {
        printf("N est sociable");
        if((i-1)==1)
        {
            printf("et parfait");
        }
        if((i-1)==2)
        {
            printf("et amical");
        }
        printf(" d'orde %d",(i-1));
    }
}
