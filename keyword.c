#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30],s2[30];
    char *ptr,key;
    printf("ENter string");
    scanf("%s",s1);
    printf("Enter keyword");
    scanf("%s",s2);
    ptr=strstr(s1,s2);
    if (ptr){
        printf("Keyword %s found in the course description",s2);
    }
    else
    {
        printf("not found");
    }
    
    
}
