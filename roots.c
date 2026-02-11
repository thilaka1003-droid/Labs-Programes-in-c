#include <stdio.h>
#include <math.h>
int main()
{
    int r1,r2,a,b,c;
    float d;
    printf("Enter a b c values");
    scanf("%d %d %d", & a,&b,&c);
    if(a==0)
    {
        printf("calculations of roots are not possible");
        exit(0);
    }
    d=sqrt((b*b-4*a*c))/2*a;
    if(d==0){
        r1=r2=-b/2*a;
        printf("Roots are real and equal");
        printf("%.2f %.2f",r1,r2);
    }
    else if(d>0){
        r1=-b+sqrt(d)/2*a;
        r2=-b-sqrt(d)/2*a;
        printf("roots are real and distict");
        printf("%f %f",r1,r2);
        }

        else{
            r1=-b/2*a;
            r2=-b+sqrt(fabs(d))/2*a;
            printf("roots are imaginary");
            printf("%f +i%f %f -i%f",r1,r2,r1,r2);
        }
        





}