#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 10
//Kan bare endre ARRAY_SIZE så vil den funke med annen array

//Functions:
int minimum(int numbers[], int count);
int maximum(int numbers[], int count);
int sum(int numbers[], int count);
float average(int numbers[], int count);
void sort(int numbers[], int count); //sort er ikke en value, så gir den void :/
float median(int numbers[], int count);

//Comparison function needed for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int numbers[ARRAY_SIZE];

    //Reading 10 integers(viktig) from the user
    printf("Enter 10 integers:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        scanf("%d", &numbers[i]);
    }

    //Calling the functions and showing the results
    printf("Minimum: %d\n", minimum(numbers, ARRAY_SIZE));
    printf("Maximum: %d\n", maximum(numbers, ARRAY_SIZE));
    printf("Sum: %d\n", sum(numbers, ARRAY_SIZE));
    printf("Average: %g\n", average(numbers, ARRAY_SIZE));

    //Sort the numbers and print them
    sort(numbers, ARRAY_SIZE);
    printf("Sorted: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Print the median
    printf("Median: %g\n", median(numbers, ARRAY_SIZE));

    return 0;
}

//Function to calculate the minimum
int minimum(int numbers[], int count)
{
    int min = numbers[0];
    for (int i = 1; i < count; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

//Function to calculate the maximum
int maximum(int numbers[], int count)
{
    int max = numbers[0];
    for (int i = 1; i < count; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

//Function to calculate the sum
int sum(int numbers[], int count)
{
    int total = 0;
    for (int i = 0; i < count; i++)
    {
        total += numbers[i];
    }
    return total;
}

//Function to calculate the average
float average(int numbers[], int count)
{
    int total = sum(numbers, count);
    return (float)total / count;
}

// Function to sort the array using qsort
void sort(int numbers[], int count) {
    qsort(numbers, count, sizeof(int), compare);
}

// Function to calculate the median
float median(int numbers[], int count)
{
    sort(numbers, count);  //Ensure the array is sorted
    if (count % 2 == 0) {
        // If even, return the average of the two middle values
        return (numbers[count / 2 - 1] + numbers[count / 2]) / 2.0;
    } else {
        //If odd, return the middle value
        return numbers[count / 2];
        //Hvorfor må medianen være så jævlig komplisert
    }
}
// hvorfor var dette så komplisert.

// bare for referanse:
/* Write a program that reads in 10 integers, then (The numbers here are just an example):

Prints out the lowest value:
Minimum: 5
Prints out the highest value:
Maximum: 12
Prints out the sum of all the values
Sum: 78
Prints out the average (make sure you use %g with printf to round properly):
Average: 15.6
Prints out the numbers, sorted
Sorted: 1 4 5
Prints out the median
Median: 5.5
Requirements: Minimum, maximum, sum, average and median must be calculated using separate functions you write, not directly in main. Here how the sum function could look like (more in the lecture):

int sum(int numbers[], int count)
{
...
}
The functions must be called:

minimum with return type int
maximum with return type int
sum with return type int
average with return type float
median with return type float

*/