#include <stdio.h>
int main()
{
    int id,choice,verified=0,i;
    int pan_number[]={101,102,103};
    int aadhar[]={201,202,203};
    int aapar[]={301,302,303};
    int dl[]={401,402,403};
    printf("Pan verification\n");
    printf("Aadhar verification\n");
    printf("Aapar verification\n");
    printf("Dl verification\n");
    printf("Enter choice\n");
    scanf("%d",&choice);
    printf("Enter id");
    scanf("%d",&id);
    switch (choice)
    {
    case 1:for ( i = 0; i < 3; i++)
    {
        if(id==pan_number[i])
        verified=1;
        break;
    }
    break;
    case 2:for ( i = 0; i < 3; i++)
    {
        if(id==aadhar[i])
        verified=1;
        break;
    }
    break;
     case 3:for ( i = 0; i < 3; i++)
    {
        if(id==aapar[i])
        verified=1;
        break;
    }
    break;
     case 4:for ( i = 0; i < 3; i++)
    {
        if(id==dl[i])
        verified=1;
        break;
    }
    break;
    default:printf("Invalid choice");
}
if(verified==1)
{
    printf("Verified succesfully");
}
else{
    printf("Not verified");
}
return 0;
}


   