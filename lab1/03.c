/*Scan value from user into an array until user is 0(zero)*/


#include<stdio.h>
int main()
{
    int arr[100];
    int i=0,j;
    for(i=0; i<100; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==0)
        {
            break;
        }
    }
    for(j=0; j<i; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}
