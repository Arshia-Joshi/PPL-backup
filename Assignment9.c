/*A class teacher wants to keep record of 10 students in the class along with the names and marks
obtained in 5 subjects. Write a C program with structure that displays :
a) Overall percentage result of the class
b) Total number of passing students in the class,
c) Total number of students failing in one subject
d) Total number of distinctions in the class.*/
#include <stdio.h>
struct student{
	char name[100];
	int marks[5];
};

int main(){
	int n ;
	printf("Enter total number of students : ");
	scanf("%d" , &n);
	struct student s[n];
	int i , j ,totalmarks[n], passstud = 0 ,dist = 0 ,failstud ,overpercent=0;
	for(i=0 ; n>i ;i++){
		totalmarks[i]=0;
		printf("Enter name of the student: ");
		scanf("%s",s[i].name);
		for(j=0 ; 5>j ; j++){
			printf("Enter marks of subject %d : " , j+1);
			scanf("%d" ,&s[i].marks[j]);
		}
	}
	for(i=0 ; n>i ; i++ ){
		for(j=0 ; 5> j ; j++ ){	
		totalmarks[i] = totalmarks[i] + s[i].marks[j];
	}
}
	for(i=0 ; n>i ; i++){
		if(totalmarks[i] > 200){
			passstud = passstud +1;
		}
		if(totalmarks[i]>375){
			dist = dist+1 ;
		}
		overpercent=overpercent+totalmarks[i];
	}
	overpercent=overpercent/(n*5);
	printf("Overall percentage of the class is: %d\n" , overpercent);
	printf("Number of students passing : %d\n" ,passstud );
	printf("Number of students failing : %d\n" , n-passstud);
	printf("Number of students with Distinction : %d" , dist);
	return 0;
}
