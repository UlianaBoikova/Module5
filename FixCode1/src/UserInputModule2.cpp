//============================================================================
// Name        : UserInputModule2.cpp
// Author      : Uliana Boikova
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

int main() {
    std::string firstInput, secondInput;

    // Repeat this iteration for three times
    for (int i = 0; i < 3; ++i) {
        // Entering the first input
        std::cout << "Please enter the first string: ";
        std::getline(std::cin, firstInput);

        // Entering the second input
        std::cout << "Please enter the first string: ";
        std::getline(std::cin, secondInput);

        // String concatenation
        std::string result = firstInput + secondInput;

        // Output the result
        std::cout << "Result: " << result << std::endl;
        std::cout << "\n" << std::endl;
    }

    return 0;
}

