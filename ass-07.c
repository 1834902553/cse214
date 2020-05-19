#include<stdio.h>
int main(){

int arr[100];
int i,j,n=10;
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("Print Array Element Reverse Order\n");
for(j=n-1;j>=0;j--){
    printf("%d",arr[j]);
}
printf("\n");
return 0;



}

