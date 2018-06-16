#include<stdio.h>
#include<conio.h>
#define SIZE 10

int binarySearch(int a[],int key,int low,int high)
{
	int mid;
	mid=(low+high)/2;  //mid of the array is obtained
	if(key==a[mid])      //checks to see if it is mid element
		return mid;
	else if(key<a[mid])
		binarySearch(a,key,low,mid-1);  //search the left sub list
	else
		binarySearch(a,key,mid+1,high);  //search the right sub list
}

void main()
{
	int a[SIZE],key,n,i,flag;
	clrscr();
	printf("\n\n************Recursive Binary Search***********\n\n");
	printf("\n How many elements are there in an array?");
	scanf("%d",&n);
	printf("\n Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n Enter the element to be searched:");
	scanf("%d",&key);
	flag=binarySearch(a,key,0,n-1);
	printf("\n Element is found at %d position",flag+1);
	getch();
}