#include <stdio.h>

int main() {
    int n, num, evenSum = 0, oddSum = 0;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input the elements and calculate the sum
    for (int i = 1; i <= n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &num);

        // Check if the number is even or odd
        if (num % 2 == 0) {
            evenSum += num; // Add to even sum
        } else {
            oddSum += num; // Add to odd sum
        }
    }

    // Display the sums
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}
