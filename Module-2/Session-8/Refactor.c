#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char text[]) {
    text[0] = toupper(text[0]);
}

 main() {

    char product[] = "shoes";
    char username[] = "anurag";

    capitalizeFirstLetter(product);
    capitalizeFirstLetter(username);

    printf("Product: %s\n", product);
    printf("Username: %s\n", username);

}
