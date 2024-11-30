//============================================================================
// Name        : UserInputModule2.cpp
// Author      : Uliana Boikova
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

int main() {

	// Create three integer variables
	int firstNumber, secondNumber, thirdNumber;

	// Fill variables with numbers entered by the user
	std::cout << "Please enter the first number: ";
	std::cin >> firstNumber;
	std::cout << "Please enter the second number: ";
    std::cin >> secondNumber;
	std::cout << "Please enter the third number: ";
	std::cin >> thirdNumber;

    // Declare variables for pointers
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Assign them variable values
    *ptr1 = firstNumber;
    *ptr2 = secondNumber;
    *ptr3 = thirdNumber;

    // Display the value of a variable and a pointer to it on the screen
    std::cout << "First number: " << firstNumber << ", First pointer: " << ptr1 <<std::endl;
    std::cout << "Second number: " << secondNumber << ", Second pointer: " << ptr2 <<std::endl;
    std::cout << "Third number: " << thirdNumber << ", Third pointer: " << ptr3 <<std::endl;
    // Free dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}

