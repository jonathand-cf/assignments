#include <stdio.h>
#include "menu.h"

int main()
{
    int choice;
    do {
        // Display the menu and get user's choice
        choice = displayMenu();

        // Process the menu choice
        processChoice(choice);

    } while (choice != 3);  // Exit if choice is 3 (Exit)

    return 0;
}
