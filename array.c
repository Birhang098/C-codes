#include <stdio.h>

#define MAX 100

int main() {
    int n, i;
    int arr[MAX]; // Use MAX to define the array size

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Check if n is within the allowed range
    if (n < 1 || n > MAX) {
        printf("Invalid array size. Please enter a size between 1 and %d.\n", MAX);
        return 1; // Exit with an error code
    }

    printf("Enter the elements of the array-->\n");
    for (i = 0; i < n; i++) {
        printf("Enter the element no.%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array is: { ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");

    int ele, pos;
    printf("Enter the new element: ");
    scanf("%d", &ele);
    printf("Enter the position of the new element: ");
    scanf("%d", &pos);

    // Check if the position is within the valid range
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position. Please enter a position between 1 and %d.\n", n + 1);
        return 1; // Exit with an error code
    }

    n++;
    for (int i = n - 1; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;

    printf("The array is: { ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");

    return 0;
}
