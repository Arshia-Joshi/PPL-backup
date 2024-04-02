/*Write a program to accept marks of five courses and if student is pass then find the grade obtained
by student. If student scores aggregate greater than 75%, then the grade is distinction. If aggregate is
60>and <75 then the grade is first division. If aggregate is >=50 and <60 then the grade is second
division. If aggregate is >=40 and <50 then the grade is third division */

#include <stdio.h>
int main(){
	int s1 , s2 , s3 , s4 , s5  , pc;            		//Declaring variables
	printf("Enter marks of first subject :");	 		//Taking marks of subjects as input
	scanf("%d" , &s1) ;
	printf("Enter marks of second subject :");
	scanf("%d" , &s2) ;
	printf("Enter marks of third subject :");
	scanf("%d" , &s3) ;
	printf("Enter marks of fourth subject :");
	scanf("%d" , &s4) ;
	printf("Enter marks of fifth subject :");
	scanf("%d" , &s5) ;
	if(s1>40&&s2>40&&s3>40&&s4>40&&s5>40){				//Checking if individual subject percentage is greater than 40
	pc=(s1 +s2 +s3+s4+s5)/5; 							//Calculating percentage
	printf("You have attained %d percentage \n" , pc);
	if(pc>75){											//Checking percentage for respective grade
		printf("Grade : Distinction");
	}
	else if(pc>=60&&pc<75){
		printf("Grade : First Division");
	}
	else if(pc>=50&&pc<60){
		printf("Grade : Second Division");
	}
	else if(pc>=40 && pc<50){
		printf("Grade : Third Division");
	}
	else{
		printf("Grade : Fail");
	}
}
	else{
		printf("You have failed due to less than 40 marks in a subject");
	}
	
	return 0;                                    
	
	}
	
	
	


