#include<stdio.h>
main(){
	float price, discount, finalPrice;
	int isMember;
	
	printf("Enter a price:");
	scanf("%f", &price);
	
	printf("Enter a discount:");
	scanf("%f", &discount);
	
	printf("Enter a isMember:");
	scanf("%d", &isMember);
	
	//Normal Discount
	finalPrice = price - (price * discount / 100);
	
	//Extra 5% discount for member
	if(isMember == 1){
		finalPrice = finalPrice - (finalPrice * 5 / 100);
	}
	
	printf("Final Price = %.2f", finalPrice);
}
