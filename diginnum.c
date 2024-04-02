// WAP to count a number of digits in a number
#include <stdio.h>
int main(){
	int n , i= 0;
	printf("Enter a number " );
	scanf("%d" , &n);
	while(n>0){
		i++;
		n=n/10;
	}
	printf("The number has %d digits" , i);
	return 0;
}
