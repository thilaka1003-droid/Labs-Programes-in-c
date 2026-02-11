#include <stdio.h>
void swap(int *b1,int *b2);
int main() {
    int bal1,bal2;
    printf("Before swapping balances");
    scanf("%d %d",&bal1,&bal2);
    swap(&bal1,&bal2);
    printf("After swapping balances are %d %d ",bal1,bal2);
    
}
void swap(int *b1,int *b2)
{
    int temp;
    temp=*b1;
    *b1=*b2;
    *b2=temp;
    
}