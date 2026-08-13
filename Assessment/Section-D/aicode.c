#include <stdio.h>

int main() {
    int numbers[10];
    int i, j, temp;
    int min, max;
    float sum = 0, mean;

    // Accept 10 integers
    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
    }

    // Find minimum and maximum
    min = numbers[0];
    max = numbers[0];

    for (i = 1; i < 10; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }

        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    // Calculate mean
    mean = sum / 10.0;

    printf("\nMaximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Mean = %.2f\n", mean);

    // Sort array in ascending order
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display sorted list
    printf("Sorted list: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Check where mean is closer
    if (mean == (min + max) / 2.0) {
        printf("Mean is exactly midway between minimum and maximum.\n");
    }
    else if (mean < (min + max) / 2.0) {
        printf("Mean is closer to the minimum.\n");
    }
    else {
        printf("Mean is closer to the maximum.\n");
    }

    return 0;
}
