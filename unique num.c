#include<stdio.h>
#define n 5
int main()
{
    int nums[n] = {12,78,78,56,12};
    //int n = sizeof(nums)/sizeof(nums[0]);
    int item, i,j, count;
    for (i=0; i<n; i++)
    {
        count = 0;
        for (j=0; j<i; j++)
        {
            if (nums[j]==nums[i])
            {
                count = 1;
                break;
            }
        }
           if (count==0) printf("%d\n", nums[i]);
    }
    return 0;
}
