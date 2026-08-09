#include <stdio.h>
#include <string.h>

main() {
    char team[30];

    printf("Enter your favorite IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "Mumbai") == 0) {
        printf("Go Mumbai Indians!");
    }
    else if (strcmp(team, "Chennai") == 0) {
        printf("Chennai Super Kings for the win!");
    }
    else if (strcmp(team, "Bangalore") == 0) {
        printf("Come on RCB! Let's go!");
    }
    else if (strcmp(team, "Kolkata") == 0) {
        printf("Go Kolkata Knight Riders!");
    }
    else {
        printf("Team not found!");
    }
}
