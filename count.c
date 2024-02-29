/* write a progrm to print number of digits in a given digits 123=3*/
#include <stdio.h>
int count1 = 0;
int count(n)
{
	if(n != 0)
	{
		n = n/10;
		count1++;
		count(n);
	}
}
int main()
{
	int n = 999923;
	
	count(n);
/*	while(n!=0)
	{
		
		n = n/10;
		count++;
	}*/
	printf("%d",count1);
}
