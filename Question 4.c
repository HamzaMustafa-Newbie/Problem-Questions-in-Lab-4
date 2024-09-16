#include <stdio.h>
int main(){
	float ti, ta, ni;
	 printf("Please write your income: ", ti);
	 scanf("%f", &ti);
	 
	 if (ti <= 250000){
	ta = ti*0;
	ni = ti - ta;
	}
	else if (ti>=250001 && ti<=500000){
	ta = ti*0.05;
	ni = ti - ta;
	}
	else if (ti>=500001 && ti<=1000000){
	ta = ti*0.20;
	ni = ti - ta;
	}
	else{
	ta = ti*0.30;
	ni = ti - ta;
	}
	
	printf("Your total income is: %0.3f\n", ti);
	printf("The tax amount: %0.3f\n", ta);
	printf("Your net income after tax is: %0.3f\n", ni);
	
	
	
}