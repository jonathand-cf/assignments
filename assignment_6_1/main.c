#include <stdio.h>
#include <stdlib.h>

// Comparison function needed for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    int *arr;

    // Prompt the user to enter the number of integers
    printf("How many integers will you enter? ");
    scanf("%d", &n);

    // If no numbers, exit and print message
    if (n <= 0) {
        printf("No numbers were given\n");
        return 0;
    }

    // Allocate memory dynamically using malloc
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Reads in the integers
    for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print count
    printf("Count: %d\n", n);

    // Print the integers in the order they were entered
    printf("Numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort and print the integers in ascending order
    qsort(arr, n, sizeof(int), compare);
    printf("Sorted: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}