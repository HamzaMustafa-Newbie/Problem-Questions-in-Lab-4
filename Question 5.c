#include <stdio.h>
int main(){
	int year;
	
	printf("Please the year: ", year);
	scanf("%d", &year);
	
	if (year%400 == 0){
		printf("The year you entered is a leap year");
	}
	else if(year%4 == 0 && year%100 != 0){
		printf("The year you entered is a leap year");
	}
	else{
		printf("The year is not a leap year");
	}
	
	
	}