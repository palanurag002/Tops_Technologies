#include <stdio.h>
main()
{
	const float GST_RATE = 0.18f;
	float base_Price = 450.00f;
	
	float gstAmount = base_Price * GST_RATE;
	float finalPrice = base_Price + gstAmount;
	
	printf("--- Zomato Order Bill --- \n");
	printf("base_Price: Rs. %.2f \n", base_Price);
	printf("GST (%.0f%%): Rs. %.2f \n", GST_RATE * 100, gstAmount);
	printf("------------------\n");
	printf("Total Price: Rs. %.2f\n", finalPrice);
	
	return 0;
}
