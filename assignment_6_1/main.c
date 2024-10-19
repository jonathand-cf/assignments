#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    // Step 1: Ask how many integers
    printf("How many integers will you enter? ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("No numbers were given\n");
        return 1;
    }

    // Step 2: Allocate memory dynamically using malloc
    arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Step 3: Read in the integers
    for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Step 4: Print the integers in the order they were entered
    printf("Numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // (Sorting step would go here, which you can implement separately)

    // Step 5: Free the allocated memory
    free(arr);

    return 0;
}

/*

1. Prompt user to input the number of integers.
2. If no numbers were input (i.e., the count is zero), print "No numbers were given" and exit.
3. Allocate memory dynamically for the integers using malloc().
4. Use a loop to read in each integer and store it in the allocated memory.
5. Print the integers in the order they were entered.
6. Sort the integers using a sorting algorithm (e.g., bubble sort or qsort).
7. Print the integers in ascending order.
8. Free the allocated memory using free().

*/
/*

Steps to implement:
Ask for user input: Start by prompting the user to enter how many integers they will input.
Memory allocation: Use malloc() to dynamically allocate memory based on the number of integers provided by the user.
Reading integers: Loop through and read the integers into the dynamically allocated memory.
Printing the integers: First, print the integers in the order they were entered.
Sorting: Sort the array of integers using an algorithm of your choice (you could use a simple algorithm like bubble sort or qsort() if allowed).
Print the sorted integers: Finally, print the integers in ascending order.
Free memory: Use free() to release the allocated memory when done.

*/