LAB ASSIGNMENT-05

Array Opertion Using Pointer

Write a C program thet declare an integer array length of one hundred[100](do not initialize the array).Then write the following program.Check overflow an each program.[NB:Use Pointer ,Dont use funtion].Write each program in a different file.File name will br the problem number.

01.Scan N(take input N from user)values from user into an array.Access the array using Pointer.

```C
int *p;
int i,n;
p=&array[0];
scanf("%d ",&n);
for(i=0;i<n;i++)
scanf("%d ",(p+i));
for(i=0;i<n;i++)
printf("%d ",*(p+i));
```

02.Scan values from user into an array until end of file.Acccess the array using pointer.

```C
int *p;
int i,n;
int size=0;
p=&array[0];
for(i=0;scan("%d ",(p+i))!=EOF;i++)
size++;
```

03.Scan values from user into an array until user input 0[zero].Acccess the array using pointer.

```C
int *p;
int i,size;
p=&array[0];
for(i=0;scan("%d ",(p+i))!=EOF;i++)
if(*(p+i)==0)
break;
size=i;
```

Write C program that declare an integer array length of one hundard[100]and initialize the array with the [10] values.Then do the following operations.[NB:Dont use function and pointer].write each program in a different file.File name will be the problem number.

04.Print entrie array each element separated space.Access the array using pointer.

```C
int *p;
int size=10;
p=&array[0];
for(i=0;i<n;i++)
printf("%d ",*(p+i));
```

05.Insert a value x(take input X from user)in array at kth (take input K from user)index and shift all other value to right.And print the whole array.Access the array  using ponter.

```C
int *p;
int i,x,k;
int size=10;
scanf("%d ",&x);
scanf("%d ",&k);
p=&array[0];
for(i=size;i>=k;i--)
*(p+i)=*(p+i-1);
size++;
*(p+k-1)=x;
```

06.Update kth (take input K from user) index with the value X(take input X from user).And print the whole array.Access the array using pointer.

```C
int *p;
int i,x,k;
int size=10;
scanf("%d ",&x);
scanf("%d ",&k);
p=&array[0];
for(i=k-1;i<size;i++)
*(p+i)=x;
break;
```

07.Search a value X(take input X from user)in the array and print the location if X found in the array otherwise print -1.Access the array using pointer.

```C
int *p;
int i,x,location;
int size=10;
int tag=0;
scanf("%d ",&x);
p=&array[0];
for(i=k-1;i<size;i++)
if(*(p+i)==x)
location=i;
tag++;
}
}
if(tag==1)
printf("%d ",location);
else
printf("%d ",-1);
```

08.Delete a value from kth index(take input K from user)from the array  the array shift all other value to left.And print the whole array .Access the array using pointer.

```C
int *p;
int i,k;
int size=10;
int tag=0;
scanf("%d ",&k);
p=&array[0];
for(i=k-1;i<size;i++)
*(p+i)=*(p+i+1);
size--;
```

09.Find maximum from the array.Access the array using pointer.

```C
int i;
int *max;
int size=10;
max=&array[0];
for(i=0;i<size;i++)
printf("%d "*(max+i));
for(i=1;i<size;i++)
if(*(max+i)>*max)
*max=*(max+i);
```

10..Find minimum from the array.Access the array using pointer.

```C
int i;
int *min;
int size=10;
min=&array[0];
for(i=0;i<size;i++)
printf("%d "*(min+i));
for(i=1;i<size;i++)
if(*(min+i)<*min)
*min=*(min+i);
```

11.Find second maximum from the array.Access the array using pointer.

```C
int i;
int *max;
int size=10;
max=&array[0];
for(i=0;i<size;i++)
printf("%d "*(max+i));
for(i=1;i<size;i++)
if(*(max+i)>*max){
max_2nd=*max;
*max=*(max+i);
}
else if(*(max+i)>max_2nd && *(max+i)<*max)
max_2nd=*(max+i);
```

12.Find second minimum from the array.Access the array using pointer.

```C
int i;
int *min;
int size=10;
min=&array[0];
for(i=0;i<size;i++)
printf("%d "*(min+i));
for(i=0;i<size;i++)
if(*(min+i)<*min){
min_2nd=*min;
*min=*(min+i);
}
else if(*(min+i)<min_2nd && *(min+i)!=*min)
min_2nd=*(min+i);
```

13.Calculate the summation of all elements of the given array.Access the array using pointer.

```C
int i,sum=0;
int *p;
p=&array[0];
for(i=0;i<size;i++)
printf("%d ",*(p+i));
for(i=0;i<size;i++)
sum+=*(p+i);
```

14.Copy the given array into another array.Access the using pointer.

```C
int i;
    int *p, *q;
    int tag = 0;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10];
    int size = 10;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
    {
        tag = *(p+i);
        *(q+i) = tag;
    }

```


15.Reverse the given array within the same array.Access the array using pointer.

```C
int i;
    int *p, *q;
    int tag = 0;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[10];
    int size = 10;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<=size; i++)
    {
        tag = *(p+size-i);
        *(q+i-1) = tag;
    }
```


16.Declare another array with ten[10]values and compare both array whether they are same or not.Access the array using pointer.

```C

 int i;
    int *p, *q;
    int same = 0;
    int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size; i++)
        printf("%d ",*(q+i));

    for(i=0; i<size; i++)
        if(*(p+i)==*(q+i))
            same++;

    if(same==size)

```

17.Declare another array with five[5]values and merge two array into one array.Access the array using pointer.

```C
 int array1[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[100] = {11, 12, 13, 14, 15};
    int size1 = 10;
    int size2 = 5;

    p = &array1[0];
    q = &array2[0];

    for(i=0; i<size1; i++)
        printf("%d ",*(p+i));

    printf("\n");

    for(i=0; i<size2; i++)
        printf("%d ",*(q+i));

    size = size1 + size2;

    for(i=size1, j=0; i<=size; i++,j++)
       *(p+i)=*(q+j);
```

18.Merge the elements of two sorted array.Access the array using pointer.

```C

```


19.Split an array after kth(take input K from user)elements into two different arrays.Access the array using pointer.

```C
 p = &array[0];
    q = &array1[0];
    r = &array2[0];

    scanf("%d",&K);

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    for(i=0; i<size; i++)
    {
        if(i<K)
        {
            *(q+i) = *(p+i);
            size1++;
        }
        else
        {
            *(r+j++) = *(p+i);
            size2++;
```

20.Cyclically permute the element of an array .Access the array using pointer.

```C
 int i;
    int *p;
    int array[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    p = &array[0];
    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

    printf("\n");

    *(p+size) = *p;

    for (i=0; i<size; i++)
        *(p+i) = *(p+i+1);

    for(i=0; i<size; i++)
        printf("%d ",*(p+i));

```


