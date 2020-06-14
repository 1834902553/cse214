/*Insert a value X[take input X from user] in the array at the end of currently stored elements*/
#include<stdio.h>
int main(){
int arr[100]={11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 25 };
int i,size=13;
int X;
scanf("%d\n ",&X);
arr[size]=X;
size++;
for(i=0 ;i<size ; i++)
{
    printf("%d ",arr[i]);
}
return 0;
}
