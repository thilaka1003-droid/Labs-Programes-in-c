#include <stdio.h>
#include <math.h>

int main()
{
    int deg,n,i;
    float x,sum=0,num,den;
    printf("ENter number of terms");
    scanf("%d",&n);
    printf("Enter degree");
    scanf("%d",&deg);
    x=(3.14/180)*deg;
    num=x;
    den=1;
    for(i=1;i<n;i++){
        sum=sum+(num/den);
        num=-num*x*x;
        den=den*(2*i)*(2*i+1);
        
    }
        printf("sin(%d)=%f\n",deg,sum);
        printf("sin(%d)=%f\n",deg,sin(x));
    return 0;

}