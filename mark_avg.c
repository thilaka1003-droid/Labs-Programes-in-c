#include <stdio.h>
void result (int marks1,int mark2, int mark3);
int main()
{
    int m1,m2,m3;
    
    printf("Enter marks");
    scanf("%d %d %d",&m1,&m2,&m3);
    result(m1,m2,m3);
}
void result (int marks1,int marks2,int marks3)
{
    float avg;
    if(marks1>=40 && marks2>=40 && marks3>=40)
    {
        printf("Pass");
    }
    else{
        printf("fail");
    }
    avg=(marks1+marks2+marks3)/3;
    printf("Average marks is %f\n",avg);
    return 0;
}