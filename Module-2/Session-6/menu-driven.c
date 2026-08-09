#include <stdio.h>

main() {
    int choice;

    while (1) {
        printf("\n--- IPL Fan Menu ---\n");
        printf("1. View Favorite Teams\n");
        printf("2. Add New Team\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("1. Mumbai Indians\n");
            printf("2. Chennai Super Kings\n");
            printf("3. Royal Challengers Bangalore\n");
        }
        else if (choice == 2) {
            printf("New team added!\n");
        }
        else if (choice == 3) {
            printf("Goodbye!\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

 }
