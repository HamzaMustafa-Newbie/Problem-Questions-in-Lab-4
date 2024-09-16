#include <stdio.h>
int main()
{
	float marks, grade;
	printf("Please write your marks: ", marks);
	scanf("%f", &marks);
	
	if (marks>=90){
	printf("Grade A");
	}
	else if (marks>=80 && marks<90){
		printf("Grade B");
	}
	else if (marks>=70 && marks<80){
		printf("Grade C");
	}
	else if (marks>=60 && marks<70){
		printf("Grade D");
	}
	else {
	printf("Grade F");	
	}
}
