#include<stdio.h>
main(){
	
	float percentage;
	
	printf("Enter Students percentage: ");
	scanf("%f", &percentage);
	
	//Checked invalid percentage
	if(percentage < 0 || percentage > 100){
		printf("Error: Percentage must be between 0 to 100.\n");
		return 0;
	}
	
	//Assign Grade
	if(percentage >= 90){
		printf("Grade: A\n");
		printf("Excellent work! Keep it up.\n");
	}
	else if(percentage >= 75){
		printf("Grade: B\n");
		printf("Good work! Keep pushing.\n");
	}
	else if(percentage >= 60){
		printf("Grade: C\n");
		printf("Good effort! You can improve further.\n");
	}
	else if(percentage >= 45){
		printf("Grade: D\n");
		printf("Keep working hard! You can do better.\n");
	}
	else {
		printf("Grade: F\n");
		printf("Do not give up! Keep learning and try again.\n");
	}
}
