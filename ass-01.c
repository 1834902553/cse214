#include<stdio.h>
int main()
{
    int arr[100];
    int j,n,i=0;
    scanf("%d",&n);
   while(scanf("%d",&arr[i]==1)){
    i++;
    if(i>n){
        printf("ARRAY OVERFLOW\n");
        break;
    }
   }
   for(j=0;j<i;j++){
    printf("%d",arr[j]);
   }
    return 0;
}
