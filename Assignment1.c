/*Write a program to calculate the salary of an employee given his basic pay (take input from
user).Calculate gross salary of employee. Let HRA be 10% of basic pay and TA be 5% of basic pay.
Let an employee pay professional tax as 2% of total salary. Calculate net salary payable after
deduction */
#include <stdio.h>
int main()
{
	char empname[50] ;
	int sal ,hra,ta, tsal , paysal , ptax ;
	printf("Enter your name : ");
	scanf("%s" , empname);
	printf("Enter your salary : ");
	scanf("%d",&sal);
	hra=sal/10;
	ta=sal/20;
	printf("HRA is : %d" , hra);
	printf("\nTA is : %d" , ta);	
	tsal = sal + hra + ta;
	printf("\nTotal salary is : %d",tsal);
	paysal=tsal-(tsal/50) ;
	ptax = tsal/50 ;
	printf("Professional tax is : %d" , ptax);
	printf("\n%s, your net payable salary is  : %d" , empname , tsal-ptax);	
	return 0 ;
}
