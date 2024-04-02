#include <stdio.h>
void callbyrefswap( int *x , int *y){
	int temp;
	temp = *x;
	*x = *y ;
	*y = temp;
	
}
int main(){
	int a , b ;
	printf("Enter 2 values ");
	scanf("%d %d" , &a , &b);
	printf("Value of a before swapping : %d\n" , a);
	printf("Value of b before swapping : %d\n" , b);
	callbyrefswap(&a ,&b);
	printf("Value of a after swapping : %d\n" , a);
	printf("Value of b after swapping : %d" , b);
	return 0;
}
