#include <iostream>
#include <string>

int main()
{
    // Declare strings for user input
    std::string firstString, secondString;

    // Get user input
    std::cout << "Enter the first string: ";
    std::getline(std::cin, firstString);
    std::cout << "Enter the second string: ";
    std::getline(std::cin, secondString);

    // Compare if strings are equal
    if (firstString == secondString)
    {
        std::cout << "The strings are equal" << std::endl;
    } else
    {
        std::cout << "The strings are not equal" << std::endl;
    }

    // Check if one string is a substring of the other
    if (firstString.find(secondString) != std::string::npos)
    {
        std::cout << "Second string is a substring of the first string" << std::endl;
    } else if (secondString.find(firstString) != std::string::npos)
    {
        std::cout << "First string is a substring of the second string" << std::endl;
    } else
    {
        std::cout << "There are no substrings" << std::endl;
    }

    return 0;
}