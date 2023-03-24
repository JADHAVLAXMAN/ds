Program to implement linear, binary search using recursion Program:
#include<stdio.h>
#include<conio.h>

int binary_recursive(int a[], int low, int high, int x); int
binary_iterative(int a1[], int low1, int high1, int x1);

int main(){
 int
ch;
 int num, arr[100], i, key; int lower_bound,
upper_bound, result_recursive;
int res_iterartive,flag;

 while(num > 0)
 { printf("\n-----------------------------------------------------------------
---");
printf("\n 1.Iterative Binary \n 2.Recursive Binary \n 3.Linear Search"); printf("\n---
------------------------------------------------------------------"); printf("\nEnter Your
Choice:"); scanf("%d",&ch);

 switch(ch)
 { case
1:
printf("\nEnter
Total Number of
Elements:");
scanf("%d",&num
);

 printf("\nEnter %d Elements:",num);
for(i=0; i<num; i++)
 {
scanf("%d",&arr[i]);
 }

 printf("\n Enter Element You want To Search:");
scanf("%d",&key);
 lower_bound
=0;
upper_bound = num-1;

 res_iterartive = binary_iterative(arr,lower_bound,upper_bound,key);

 if(res_iterartive == -1)
 {
 printf("\nElement Not Found using Bimary Iteration:");
 } else
 {
 printf("\nElement is Found Using Binary Iteration");
printf("At location %d",res_iterartive + 1);
 }

break;
case 2:
printf("\nEnter
Total Number
of Elements:");
scanf("%d",&n
um);

 printf("\n Enter %d Elements:",num);
for(i=0; i<num; i++)
 {
scanf("%d",&arr[i]);
 }

 printf("\n Enter Element You want To Search:");
scanf("%d",&key);
 lower_bound
=0;
upper_bound =num-1;

 result_recursive = binary_recursive(arr,lower_bound,upper_bound,key);

 if(result_recursive == -1)
 {
 printf("\nElement is Not Found using Binary Recursive:");
 }
else {
printf("\nEleme
nt is Found using
Binary
Recursive");
printf("\n At
Location %d",
result_recursiv
e+1);
 }

break;
case 3:
 printf("\nEnter Total Number of Elements:"); scanf("%d",&num);

 printf("\n Enter %d Elements:",num); for(i=0;
i<num; i++)
 {
scanf("%d",&arr[i]);
 }

 printf("\n Enter Element You want To Search:"); scanf("%d",&key);

 for(i=0; i<num; i++)
 {
if(arr[i] == key)
{ flag =1;
break;
 }

 }
 if(flag ==
1)
 {
 printf("\nElement is Found using Linear Search");
printf("\n At Location %d",i+1);
 } else
 {
 printf("\nElement is Not Founf Using Linear Search");
 }

break;
default:
 printf("Error");
 }
return
0;

 }
}


int binary_iterative(int a[], int low, int high, int x)
{ int mid1;
if(low
>high)
return -1;
while(low
<= high)
 {
 mid1 = (low + high) /2;

 if(x == a[mid1])
return mid1; else if(x <
a[mid1]) return high =
a[mid1-1]; else
return low = a[mid1+1];
 return -
1;

 }
}

int binary_recursive(int a1[], int low1, int high1, int x1)
{ int mid;

 if(low1 > high1) return
-1;

 mid =(low1 + high1) /2;

 if(x1 == a1[mid]) return
mid;
 else if(x1 < a1[mid]) return
binary_recursive(a1,low1,mid-1,x1); else
 return binary_recursive(a1,mid+1,high1,x1);

} 