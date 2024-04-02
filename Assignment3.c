/*Write a program to check whether given number is Prime or not. Take a number as input from user.*/
#include <stdio.h>
int main()
{
	int num  ;
	printf("Enter a number :");
	scanf("%d",&num);
	int i ;
		if(num==0||num==1){
		printf("it is neither prime nor composite");
	}
	else{
	for( i = 2 ; i<num ; i++){
		if(num%i==0){
			printf("%d is not a prime number",num);
			break;
		}
	}
	if(i==num){
		printf("%d is a prime number",num);
	}
	return 0;
}
}
