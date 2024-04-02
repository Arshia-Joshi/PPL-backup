//Write a program in C to store n elements in an array and print the elements using a pointer.
#include <stdio.h>
int main(){
	int n , i;
	printf("Enter number of elements in the array : ");
	scanf("%d",&n);
	int arr[n];
	int *ptr;
	ptr=arr;
	printf("Enter elements of the array : ");
	for(i=0 ; i<n;i++){
		scanf("%d",ptr);
		ptr++;
	}
	printf("Elements are : ");
	ptr=arr;
	for(i=0;i<n;i++){
		printf("%d",*ptr);
		ptr++;
	}
}
