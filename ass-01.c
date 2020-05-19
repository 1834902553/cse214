#include <stdio.h>
int main()
{
    int arr[100];
    int i=0,j,n;
    printf("Enter N array size : ");
    scanf("%d",&n);
    while(scanf("%d",&arr[i])!=EOF){
            if((n-1)<=i)
            {
                printf("over \n");
                break;
            }
        i++;
    }
    for(j=0;j<i;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}

