/*Write a C program to store N numbers in an array and compute the sum of all even and odd numbers
in an array*/
#include <stdio.h>
int main(){
	int n , i , esum  = 0, osum = 0;						//Declaring variables
	printf("Enter total number of inputs : ");
	scanf("%d" , &n) ;										
	int arr[n];
	for(i = 0 ; n>i ; i++){
		printf("Enter element number %d : " , i+1);
		scanf("%d" , &arr[i]);
	}
	for(i = 0 ; n>i ; i++){
		if(arr[i]%2==0){
			esum=esum+arr[i];
		}
		else{
			osum=osum+arr[i];
		}
	}
	printf("Sum of all Even numbers is  %d \n" , esum);
	printf("Sum of all Odd numbers is  %d" , osum);
	return 0;
}
