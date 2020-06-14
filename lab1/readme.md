LAB ASSIGNMENT-01

Declare

Initialize

Access

Input

Output

Write a C program that declare an integer array length of one hundres(100)(do not initialize the array).Then write the following program.Check overflow on each program.[Don't use function and pointer].Write each program in a different file. File name will be the problem number.

01.Scan N (take input N from user) value from user into an array.

```C
int n,i=0;
scanf("%d ",&n);
while(scanf("%d ",&a[i])==1){
i++;
if (i>n){
printf("Array overflow\n);
break;
}
}
```

02.Scan value from user into an array until end of file.

```C
int i=0,j;
while(scanf("%d ",&a[i])!=EOF){
i++;
}
```

03.Scan value from user into an array until user is 0(zero).

```C
int i=0,j;
for(i=0;i<100;i++){
scanf("%d ",&a[i]);
if(a[i]==0){
break;
}
```

Write a C program that declare an integer array length of one hundres(100) and initialize the array with ten(10) values.Then do the following operations.[Don't use function and pointer].Write each program in a different file. File name will be the problem number.

04.Print entire array each element in newline.

```C
int i,n;
scanf("%d ",&n);
for(i=0;i<n;i++){
scanf("%d ",&a[i]);
}
printf(" print array elements newline\n");
```

05.Print entire array each element separated by space.

```C
int i,n,j;
scanf("%d ",&n);
for(i=0;i<n;i++){
scanf("%d ",&a[i]);
}
printf(" print array elements by space\n");
```

06.Print entire array each element separated by comma .

```C
int i,n,j;
scanf("%d ",&n);
for(i=0;i<n;i++){
scanf("%d ",&a[i]);
}
printf(" print array elements by comma\n");
```

07.Print  the array elements in reverse order . Each elements should be separated by space .

```C
int i,n=10,j;
for(i=0;i<j;i++){
scanf("%d ",&a[i]);
}
printf(" print array element reverse order\n");
```

