/*Write a program to accept n number of element from user (where, n is specified by user) and stores
data in an array and display the largest element of that array using loops. */
#include <stdio.h>
int main(){
	int n , i , max = 0;
	printf("Enter total number of inputs : ");
	scanf("%d" , &n) ;
	int arr[n];
for(i = 0 ; n>i ; i++){
		printf("Enter element number %d : " , i+1);
		scanf("%d" , &arr[i]);
	}
	for(i = 0 ; n>i ; i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	printf("Maximum is %d" , max);
	return 0;
}
