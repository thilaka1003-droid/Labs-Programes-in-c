#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q;
    printf("Enter rows and cols of first array");
    scanf("%d %d",&m,&n);
    printf("Enter array elements");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter rows and cols of second array");
    scanf("%d %d",&p,&q);
    printf("Enter array elements");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(n!=p)
    {
        printf("multiplication of matrix not possible");
        exit(0);
    }
     for(i=0;i<m;i++)
     {
        for(j=0;j<q;j++)
        {
        c[i][j]=0;
        for(k=0;k<n;k++)
        {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        }
     }
     printf("resultan matrix");
     for(i=0;i<m;i++)
     {
        for(j=0;j<q;j++)
        {
            printf("%d\t",c[i][j]);
        }
     }

}