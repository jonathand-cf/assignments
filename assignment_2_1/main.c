#include <stdio.h>

int main(void)
{
    //idk number might be float by user
    float number = 0;
    //sum is float when number can be a float
    float sum = 0;
    //the total number given is never a float
    int numbersGiven = 0;

    //could not do it without while-loop, 1 = true, so while true, until break;
    while (1)
    {
        //start, gib me number
        printf("Enter a number: ");
        scanf("%g", &number);

        //if number entered by user is 0
        if (number == 0)
        {
            //breaks the while loop
            break;
        }
        // adds +1 on numbersGiven and adds the number to the total sum
        numbersGiven ++;
        sum += number;
    }
    //Prints outputs as per assignment.
    printf("Count: %d\n", numbersGiven);
    printf("Sum: %g\n", sum);
    // Does calculation sum / numbers given, which is average of  all numbers
    printf("Average: %g\n", sum / numbersGiven);
    return 0;
}