/*Write a program that uses functions to perform the following operations:
a) Reading a complex Number
b) Writing a complex number
c) Addition of two complex numbers
d) Multiplication of two complex numbers.*/
#include <stdio.h>
struct complex{
	int real ;
	int imaginary ;
};
int main(){
	struct complex a,b ;
	int n;
	do{
		printf("Enter 1 for reading the complex number.\nEnter 2 for writing a complex number.\nEnter 3 for addition of 2 complex number.\nEnter 4 for multiplication of 2 complex number.\nEnter 5 for stopping operations.\n");
		scanf("%d",&n);
		if(n==1){
			printf("Enter real part of first complex number : ");
			scanf("%d",&a.real);
			printf("Enter imaginary part of first complex number : ");
			scanf("%d",&a.imaginary);
			printf("Enter real part of second complex number : ");
			scanf("%d",&b.real);
			printf("Enter imaginary part of second complex number : ");
			scanf("%d",&b.imaginary);
		}
		else if(n==2){
			printf("Your First Complex number is %d + %di\n",a.real,a.imaginary);
			printf("Your Second Complex number is %d + %di\n",b.real,b.imaginary);
			}
		else if(n==3){
			printf("Sum of the complex numbers is : %d + %di\n",a.real+b.real,a.imaginary+b.imaginary);
		}
		else if(n==4){
    printf("The multiplication of the two numbers is: %d+%di\n",a.real*b.real-a.imaginary*b.imaginary,a.real*b.imaginary+b.real*a.imaginary);
		}
	}while(n!=5);
}
