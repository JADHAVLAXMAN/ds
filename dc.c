#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <time.h>

int max, min; int
a[50];

void maxmin(int i , int j)
{ int max1, min1,
mid; if(i == j) {
max = min = a[i];
 } else
{
 if( i == j-1)
 {
if(a[i] < a[j])
 {
max = a[j];
min = a[i];
 }
 else {
max = a[i]; min
= a[j];
 } }
else { mid =
(i + j ) /2;
maxmin(i, mid);
max1 = max;
min1 = min;

 maxmin(mid+1, j);
 if(max < max1)
max = max1; else
if(min > min1)
min = min1;
 }

 }
}

int main() { int i,
num; clock_t st,
end; double
totaltime;

 st = clock();

 printf("Enter total number of elements:\n"); scanf("%d",
&num);

 printf("Enter the elements of array: \n"); for(i=1;
i<=num; i++)
 {
 scanf("%d",&a[i]);
 }

 max = a[0]; min
= a[0];

 maxmin(1, num);

 printf("Minimum element: %d : \n", min); printf("Maximum
element: %d : \n", max);

 end = clock();

 totaltime = ((double) (end - st)) / CLOCKS_PER_SEC; printf("Total
time : %f",totaltime);

 getch();
} 