#include<stdio.h>
#define g 20
int main()
{
    int n,c,d,m,ii,i,j,jj,f,k,cpt,cptt,a,b,val1,val2;
    int t[g],tt[g],mat[g][g];
    ii=0;
    cpt=0;
    b=0;
    f=0;
    k=0;
    printf("donner le nombre de ligne et de clonnes SVP \n");
    scanf("%d",&n);
    scanf("%d",&m);
    printf("****remplisage de matrice**** \n ");
    printf("remplissez le materice SVP \n");
    for(i=0;i<n;i++)
    {
     for(j=0;j<m;j++)
     {
         scanf("%d",&a);
         mat[i][j]=a;
         /*for(jj=0;jj<ii;jj++)
         {
             if(a==t[jj])
                {
                    cpt++;
                }
             if(cpt==0)
             {
                 t[ii]=a;
                 ii++;
             }
          }*/
      }
     }
      printf("le matrice \n");
      for(i=0;i<n;i++)
       {
         for(j=0;j<m;j++)
          {
           printf("%d ",mat[i][j]);
          }
          printf("\n");
       }
//       printf("le tableau t \n ");
//       for(jj=0;jj<ii;jj++)
//       {
//           printf("%d",&t[jj]);
//       }
        ////chercher les elements égaux
//        for(jj=0;jj<ii;jj++)
//       {
//            if(cpt==1)
//            {
//                f=k;
//            }
//            k=f;
//            cptt=0;
//            for(i=0;i<n;i++)
//                {
//                 for(j=0;j<m;j++)
//                  {
//                   if((mat[i][j]==t[jj])&&(cptt>0))
//                   {
//                      tt[f]=i;
//                       f++;
//                       tt[f]=j;
//                       f++;
//                   }
//                   if((mat[i][j]==t[jj])&&(cptt=0))
//                   {
//                       tt[f]=i;
//                       f++;
//                       tt[f]=j;
//                       f++;
//                       cptt++;
//                   }
//
//                  }
//                }
//       }
//        printf("k=",&k);
//        printf("le tableau tt \n");
//       for(f=0;jj<k;f++)
//       {
//           printf("%d",&tt[f]);
//       }
//          printf(" \n");
//          printf("donner les 2 val");
//          scanf("%d",&val1);
//          printf("\t");
//          scanf("%d",&val2);
//          while(b<=k)
//          {
//              c=tt[b];
//              b++;
//              d=tt[b];
//              mat[c][b]=val1;
//              b++;
//              c=tt[b];
//              b++;
//              d=tt[b];
//              mat[c][b]=val2;
//              b++;
//
//          }

 printf(" \n");
          printf("donner les 2 val");
          scanf("%d",&val1);
          printf("\t");
          scanf("%d",&val2);
         for(i=0;i<n;i++)
       {
         for(j=0;j<m;j++)
          {
          if(val1==mat[i][j])
          {
              mat[i][j]=val2;
          }
          }
       }

     printf("le new matrice \n");
      for(i=0;i<n;i++)
       {
         for(j=0;j<m;j++)
          {
           printf("%d ",mat[i][j]);
          }
          printf("\n");
       }
}
