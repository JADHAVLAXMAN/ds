#include<stdio.h>
#include<conio.h>
#include<time.h>

void merge(int a[], int l, int mid, int h)
{ int temp[50];
int
i ,j, k;
 k = 0; i
= l; j = mid
+
1;;

 while (i<= mid && j <= h)
 { if(a[i] <
a[j]) {
 temp[k++] = a[i++];
 } else
 {
 temp[k++] = a[j++];
 }
 }

 while (i <= mid)
 {
 temp[k++] = a[i++];
 }

 while (j <= h)
 {
 temp[k++] = a[j++];
 }

 for(i = h; i>=l; i-- )
{ a[i] = temp[-k];
 }



}

void mergesort(int a[],int l, int h)
{ int mid;
 if(l < h) { mid = (l
+h) /2; mergesort(a, l,
mid); mergesort(a , mid+1,
h); merge(a, l, mid, h);
 }
}



void disp(int a[], int size)
{
int i;

 for(i=0; i<size; i++)
 {
printf("%d\n",a[i]);
 //printf("\n");
 }
printf("\n");
}

int main() { int
arr[50], num, i;
clock_t st, end; double
totaltime;

 st = clock();

 printf("Enter Total Number Of Elements:\n"); scanf("%d",
&num);

 printf("Enter %d Elements: \n", num); for(i=0;
i<num; i++)
 {
 scanf("%d",&arr[i]);
 }

 //size =sizeof(arr) / sizeof(arr[0]);

 mergesort(arr, 0, num-1);

 printf("Sorted Array :\n"); disp(arr,
num);

 end = clock();

 totaltime = ((double) (end - st)) / CLOCKS_PER_SEC; printf("\nTotal
time : %f",totaltime);

getch();
return 0;
} 