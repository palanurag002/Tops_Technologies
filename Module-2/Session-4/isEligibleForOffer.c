#include<stdio.h>

	int isEligibleForOffer(int age, float orderValue){
	if(age >=18 && orderValue > 500){
		return 1;
	}
	else
	{
		return 0;
	}
}

main(){
	int age;
	float orderValue;
	
	printf("Enter a age:");
	scanf("%d", &age);
	
	printf("Enter a orderValue:");
	scanf("%f", &orderValue);
	
	if(isEligibleForOffer (age, orderValue)){
		printf("You are Eligiable for the offer. ");
	}
	else{
		printf("You are not Eligiable for the offer.");
	}
	
}
