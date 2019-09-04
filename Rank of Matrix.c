#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <conio.h>

void main()
{
    int a[3][3];
    int i,j,k,l;
    int temp[3];
    int n = 0;
    int h,v;
    int rank_matrix = 3;

    printf("enter 3*3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");

    do
    {
        if(a[0][0]==1 || a[0][0]==-1)
        {
            break;
        }
        else if(a[1][0]==1 || a[1][0]==-1)
        {
           for(i=0;i<3;i++)
           {
               temp[i] = a[0][i];
               a[0][i] = a[1][i];
               a[1][i] = temp[i];
           }
        }

        else if(a[2][0]==1 || a[2][0]==-1)
        {
           for(i=0;i<3;i++)
           {
               temp[i] = a[0][i];
               a[0][i] = a[2][i];
               a[2][i] = temp[i];
           }
    }

    }
    while(n=1);


temp[0] = a[1][0];

       if(a[1][0]<0)
       {
           a[1][0] = a[1][0] + (temp[0] * a[0][0]);
           a[1][1] = a[1][1] + (temp[0] * a[0][1]);
           a[1][2] = a[1][2] + (temp[0] * a[0][2]);

       }

       else
       {
          a[1][0] = a[1][0] - (temp[0] * a[0][0]);
          a[1][1] = a[1][1] - (temp[0] * a[0][1]);
          a[1][2] = a[1][2] - (temp[0] * a[0][2]);

       }

temp[1] = a[2][0];
if(a[2][0]<0)
       {
           a[2][0] = a[2][0] + (temp[1] * a[0][0]);
           a[2][1] = a[2][1] + (temp[1] * a[0][1]);
           a[2][2] = a[2][2] + (temp[1] * a[0][2]);

       }

       else
       {
          a[2][0] = a[2][0] - (temp[1] * a[0][0]);
          a[2][1] = a[2][1] - (temp[1] * a[0][1]);
          a[2][2] = a[2][2] - (temp[1] * a[0][2]);

       }

       a[2][1]>100 ? (k=20):(k=10);

       for(i=0;i<=k;i++)
       {

               if((i*a[1][1])-a[2][1]==0)
               {
                  a[2][0] = a[2][0] - (i * a[1][0]);
                  a[2][1] = a[2][1] - (i * a[1][1]);
                  a[2][2] = a[2][2] - (i * a[1][2]);
               }
               else if((i*a[1][1])+a[2][1]==0)
               {
                a[2][0] = a[2][0] + (i * a[1][0]);
                a[2][1] = a[2][1] + (i * a[1][1]);
                a[2][2] = a[2][2] + (i * a[1][2]);
               }
               }

a[1][1]>100 ? (l=20):(l=10);

for(i=0;i<=l;i++)
       {

               if((i*a[0][1])-a[1][1]==0)
               {
                  a[1][0] = a[1][0] - (i * a[0][0]);
                  a[1][1] = a[1][1] - (i * a[0][1]);
                  a[1][2] = a[1][2] - (i * a[0][2]);
               }
               else if((i*a[0][1])+a[1][1]==0)
               {
                  a[1][0] = a[1][0] + (i * a[0][0]);
                  a[1][1] = a[1][1] + (i * a[0][1]);
                  a[1][2] = a[1][2] + (i * a[0][2]);
               }
               }




for(i=0;i<3;i++)
{
    if(a[i][0]==0 && a[i][1]==0 && a[i][2]==0)
   {
    --rank_matrix;
   }
}

 printf("\n rank of the matrix = %d",rank_matrix);
}
