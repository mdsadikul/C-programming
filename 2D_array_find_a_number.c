#include<stdio.h>
int main()
{
    int arr[3][3],i,j;

    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("index for arr %d,%d : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    printf("Array : \n");
    for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    int n,count=0;
    printf("Enter the value : ");
    scanf("%d",&n);
     for( i=0;i<3;i++)
    {
        for( j=0;j<3;j++)
        {
           if(n==arr[i][j])
           {
               count=1;
               break;
           }
        }
    }
    if(count==0)
        printf("Not found.");
    else
        printf("Found.");


    return 0;
}
