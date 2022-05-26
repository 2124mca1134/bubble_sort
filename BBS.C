#include<stdio.h>
#include<conio.h>
void bbsort(int arr[10], int n)
{
int i, j, temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}


void disp(int arr[],int n)
{
int i;
printf("after Bubble Sorting the array is : \n");
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}


void main()
{
int arr[10], i,n;
clrscr();
printf("enter the array size : ");
scanf("%d",&n);
printf("enter the array elements : \n");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("before Bubble sorting the array is : \n");
for(i=0;i<n;i++)
{
printf("%d\n",arr[i]);
}
bbsort(arr,n);
disp(arr,n);
getch();
}