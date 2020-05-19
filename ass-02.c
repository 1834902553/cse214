#include <stdio.h>
int main()
{

    int arr[10];
    int i=0,j;
    while(scanf("%d",&arr[i])!=EOF){
        i++;
    }
    for(j=0;j<i;j++)
    {
        printf("%d",arr[j]);
    }
    return 0;
}
