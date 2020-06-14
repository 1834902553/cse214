LAB ASSIGNMENT-03

1D Array Intermidiate Operation Part-01

Maximum

Minimun

Summation

Average

Standard Deviation

Fibonacci Number

01.Find maximum from the array.

```C
int i,max;
max=a[0];
for(i=1;i<size;i++){
if(max<a[i]){
max=a[i];
}
}
```

02.Find minimum from the array.

```C
int i,min;
min=a[0];
for(i=1;i<size;i++){
if(min>a[i]){
min=a[i];
}
}
```

03.Find second maximun from the array.

```C
for(i=0;i<size;i++){
if(a[i]>max){
second_max=max;
max=a[i];
}
else if(a[i]>second_max&&a[i]<max){
second_max=a[i];
}
}
if(second_max==INT_MIN)
```

04.Find second minimun from the array.

```C
for(i=0;i<size;i++){
if(a[i]<min)
second_min=min;
min=a[i];
}
else if(a[i]>second_min&&a[i]<min){
second_max=a[i];
}
}
if(second_min==INT_MAX)
```

05.Calculate the summation of all elements of given array.

```C
int i,sum=0;
for(i=0;i<size;i++){
sum=sum+a[i];
}
```

06.Calculate the average of all elements of given array.

```C
int i,sum=0;
double avg;
for(i=0;i<size;i++){
sum=sum+a[i];
}
avg=sum/size;
```

07.Calculate standard deviation of all elements of given array.
```C
int i,sum=0;
float sd,avg,temp,variance;
for(i=0;i<size;i++){
sum+=a[i];
}
avg=sum/(float)size;
sum=0.0;
for(i=0;i<size;i++){
temp=a[i]-avg;
sum+=pow(temp,2);
}
variance=sum/(float)size;
sd=sqrt(variance);
```

08.Calculate first 92 Fibonacci number and store those in an array.

```C
int n=92,i;
int fibo;
int f=0,s=1;
for(i=0;i<n;i++){
a[i]=f;
fibo=f+s;
f=s;
s=fibo;
}
for(i=0;i<n;i++)
```
