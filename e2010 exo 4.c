#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define t 200
#define tt 50



bool premier(int pre){



    int jj,cpt=0;


   for(jj=2;jj<(pre/2);jj++){
       if(pre%jj==0)
             {
            cpt++;
            }
            }
        if(cpt==0)
            {
           return true;
            }
            else
            {
                return false;
            }

}






int main()
{
    int n,d,m,b,i,j,ii,a,v[t],mt[tt][tt],jj,pre,cpt;
    float moy;
    printf("donnez la taille de matrice\n");
    scanf("%d",&n);
    scanf(" %d",&m);
    for(ii=0;ii<m;ii++)
    {
        v[ii]=0;
    }

    if((n<40)&&(m<50))
    {
                printf("donnez les valures du matrice ");
                b=0;
                moy=0;
                for(i=0;i<n;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        scanf("%d",&a);
                        mt[i][j]=a;
                        if(a>0)
                        {
                            v[j]++;

                        }
                    }

                }


                printf("\n \n \n \n");
                for(i=0;i<n;i++)
                {
                    for(j=0;j<m;j++)
                    {
                        printf("%d ",mt[i][j]);
                    }
                    printf("\n");
                }
                pre=0;
                printf("\n \n \n \n");
                int max=-1;
                for(ii=0;ii<m;ii++)
                {
                        moy=moy+v[ii];
                printf("la valeur %d est >> %d \n",ii,v[ii]);
                    if(premier(v[ii])==true){
                            if(v[ii]>max)
                                {
                                max=v[ii];
                                }

                    }
                }
                    moy/=m;
                if(max!=-1)
                {
                    printf("le plus grand nombre prmier est %d \n",max);
                }
                else
                {
                    printf("pas de nombre premier \n");
                }
                printf("le moyene: %f ",moy);

    }
}
