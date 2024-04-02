#include <stdio.h>
int fibnum(int i){
	int fnum;
	if(i==0){
		return 0;
	}
	else if(i==1){
		return 1;
	}
	else{
		fnum=fibnum(i-1)+fibnum(i-2);
		return fnum ;
	}
}
int main(){
	int max  , j;
	printf("Enter total no in fibonacci series ");
	scanf("%d",&max);
	for(j=0; j<max;j++){
		printf("%d\n",fibnum(j));
	}
	return 0;
}
	


