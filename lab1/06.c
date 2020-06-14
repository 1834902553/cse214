 /*Print entire array each element separated by comma */


#include<stdio.h>
int main()
{

    int arr[100];
    int i,j,n=10;
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Print Array Element By Comma.\n");
    for(j=0; j<i; j++)
    {
        printf("%d,",arr[j]);
    }
    printf("\n");
    return 0;
}
