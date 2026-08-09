#include <stdio.h>

double calculateTotal(double itemPrice, int quantity) {
    return itemPrice * quantity;
}

main() {

    double price = 19.99;
    int qty = 3;
    
    double totalBill = calculateTotal(price, qty);
    
    printf("Item Price: %.2f\n", price);
    printf("Quantity: %d\n", qty);
    printf("Total Bill Amount: %.2f\n", totalBill);
    
    return 0;
}

