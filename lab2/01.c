
/*Insert any value at tenth[10th] index of array,And print the whole array*/
#include <stdio.h>
int main(){
   int arr[100]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
   int i,n=11,size=10;
   arr[9]=n;
   for(i=0; i<size; i++)
   {
       printf("%d ",arr[i]);
   }
   return 0;
   }
