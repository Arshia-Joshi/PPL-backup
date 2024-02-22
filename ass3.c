#include<stdio.h>
struct Student{
char name[50];
int marks[5];
float percentage;
int totalMarks;
int failedSubjects;

};

int main(){

struct Student Stu_name[10];
int i,j,pass_stud=0,fail_stud=0,distinction=0;
float class_marks=0,perc=0;

//Taking students details:

printf("Enter details of 10 students:\n");
for(i=0;i<10;i++){
	printf("\nEnter your name:%d",i+1);
	scanf("%s",Stu_name[i].name);
	Stu_name[i].totalMarks=0;
	Stu_name[i].failedSubjects=0;

printf("Enter marks of 5 subjects for student %d: ", i + 1);

for (j = 0; j < 5; j++) {
	scanf("%d", &Stu_name[i].marks[j]);
	Stu_name[i].totalMarks += Stu_name[i].marks[j];

if (Stu_name[i].marks[j] < 40){

	Stu_name[i].failedSubjects++;

}
}

class_marks += Stu_name[i].totalMarks;
Stu_name[i].percentage = (float)Stu_name[i].totalMarks / (5* 100) * 100;

// Check for passing, failing in one and distinctions among the student

if (Stu_name[i].percentage >=40) {
pass_stud++;
}
if (Stu_name[i].failedSubjects == 1) {
fail_stud++;
}
if (Stu_name[i].percentage >=75) {
distinction++;
}

}

// Calculate overall class percentage
perc=(class_marks / (10*5* 100.0)) * 100;

// Display results

printf("\nOverall percentage result of the class: %f%%\n",perc);

printf("Total number of passing students in the class: %d\n",pass_stud);

printf("Total number of students failing in one subject: %d\n",fail_stud);

printf("Total number of distinctions in the class: %d\n", distinction);

return 0;
}
