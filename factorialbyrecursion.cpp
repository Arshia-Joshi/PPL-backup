//WAP to calculate factorial of a number using Recursion.
#include <iostream>

int fact(int num){
	if (num == 0){
		return 1;
	}
	else{
		return num*fact(num-1);
	}
}
int main(){
	int num;
	std::cout<<"Enter a number : " << std::endl;
	std::cin >>num;
	std::cout<<"Factorial is  : "<< fact(num);
}
