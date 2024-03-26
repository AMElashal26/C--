// Include the necessary header for input/output operations.
#include <iostream>

// Use the standard namespace to avoid typing "std::" before common operations.
using namespace std;

int main() {
    // Declare variables to store the input numbers and the result.
    int number1, number2, result;

    // Prompt the user to enter the first number.
    cout << "Enter the first number: ";
    // Store the user input in number1.
    cin >> number1;

    // Prompt the user to enter the second number.
    cout << "Enter the second number: ";
    // Store the user input in number2.
    cin >> number2;

    // Perform the addition and store the result.
    result = number1 + number2;

    // Display the result to the user.
    cout << "The result of adding " << number1 << " and " << number2 << " is " << result << ".";

    // Return 0 to indicate successful completion.
    return 0;
}