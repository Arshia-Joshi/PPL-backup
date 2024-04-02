
#include <stdio.h>
int main()
{
	int num , i = 0 , num1 = 0 , fibnum = 1;
	printf("Enter total number in fibonacci series ");
	scanf("%d" , &num) ;
	for( i = 0 ; i < num ; i++ ){
		if(i==0||i==1){
		printf("%d\n" , i);
		}
		else{
			fibnum=fibnum+num1;
			num1=fibnum-num1;
			printf("%d\n" , fibnum);
		}
		
	}
	return 0;
}
