/*Write a program to swap values of two elements. Use function and pass argument using call by Value
and call by reference.*/
#include <stdio.h>
void callbyvalue(int a ,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("Value of a , b inside function after swapping by call by value : %d , %d \n",a,b);
}
void callbyref(int *a , int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("Value of a , b inside function after swapping by call by reference : %d , %d \n",*a,*b);
}
int main(){
	int a,b ;
	printf("Enter two numbers : ");
	scanf("%d %d",&a,&b);
	printf("Value of a , b : %d , %d\n",a,b);
	callbyvalue(a,b);
	printf("Value of a , b outside function after swapping by call by value : %d , %d \n",a,b);
	callbyref(&a,&b);
	printf("Value of a , b outside function after swapping by call by reference : %d , %d ",a,b);
}

