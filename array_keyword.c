#include <stdio.h>
#include <stdlib.h>
int main()
{
    int low,high,mid,n,key,a[100],i;
    printf("Enter number of array elements ");
    scanf("%d",&n);
    printf("Enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key element");
    scanf("%d",&key);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;

    
    if(key==a[mid])
    {
        printf("key element found in %d position",mid+1);
        exit(0);
    }
    else if(key<mid)
    {
        high=mid-1;
    }
    else{
        low=mid+1;
    }
    }
    
        printf("unsuccesful search");
    
    
    return 0;


}