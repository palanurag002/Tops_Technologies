#include <stdio.h>
#include <string.h>

main() {
    char meal[20];

    printf("Enter meal time: ");
    scanf("%s", meal);

    switch (strcmp(meal, "breakfast")) {
        case 0:
            printf("Try some Poha!");
            break;

        default:
            if (strcmp(meal, "lunch") == 0) {
                printf("Try some Biryani!");
            }
            else if (strcmp(meal, "dinner") == 0) {
                printf("Try some Roti and Paneer!");
            }
            else if (strcmp(meal, "snack") == 0) {
                printf("Try some Samosa!");
            }
            else {
                printf("Try some fruits!");
            }
    }

}
