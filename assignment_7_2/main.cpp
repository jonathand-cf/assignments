#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for std::accumulate

int main() {
    std::vector<double> numbers;
    double input;

    // Ask for numbers until 0 is given
    std::cout << "Enter numbers (0 to stop):" << std::endl;
    while (true) {
        std::cin >> input;
        if (input == 0) {
            break;
        }
        numbers.push_back(input);
    }

    // Check if there are numbers to process
    if (numbers.empty()) {
        std::cout << "No numbers entered." << std::endl;
        return 0;
    }

    // Calculate the average
    double sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);
    double average = sum / numbers.size();
    std::cout << "Average: " << average << std::endl;

    // Calculate the median
    std::sort(numbers.begin(), numbers.end());
    double median;
    if (numbers.size() % 2 == 0) {
        median = (numbers[numbers.size() / 2 - 1] + numbers[numbers.size() / 2]) / 2;
    } else {
        median = numbers[numbers.size() / 2];
    }
    std::cout << "Median: " << median << std::endl;

    // Sort in descending order
    std::sort(numbers.rbegin(), numbers.rend());
    std::cout << "Descending: ";
    for (double num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}