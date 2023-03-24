#include<stdio.h>
#include <stdlib.h>
#include<conio.h>
#include <time.h>

void quicksort(int number[25],int first,int last)
{ int i, j, pivot,
temp;
if(first<last) {
pivot=first; i=first;
j=last;

 while(i<j)
 {
 while(number[i]<=number[pivot]&&i<last)
 { i++;
 }

 while(number[j]>number[pivot])
 { j--;
} if(i<j)
 {
 temp=number[i]; number[i]=number[j];
number[j]=temp;
 }
 }
 temp=number[pivot];
number[pivot]=number[j]; number[j]=temp;
quicksort(number,first,j-1);
quicksort(number,j+1,last); } } int main(){ int
i, total, number[25]; clock_t st, end; double
totaltime;

 st = clock();

 printf("Enter total no of elements: "); scanf("%d",&total);

 printf("Enter %d elements: ", total);

 for(i=0;i<total;i++)
 {
 scanf("%d",&number[i]);
 }

 quicksort(number,0,total-1); printf("Sorted
Elements are: "); for(i=0;i<total;i++)
 {
 printf(" %d",number[i]);
 }

 end = clock();

 totaltime = ((double) (end - st)) / CLOCKS_PER_SEC; printf("\nTotal
time : %f",totaltime);

getch();
return 0;
} 