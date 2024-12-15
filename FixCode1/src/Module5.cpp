//============================================================================
// Name        : PointersModule2.cpp
// Author      : Uliana Boikova
// Version     :
// Copyright   : Your copyright notice
// Description : Pointers in C++
//============================================================================
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void reverse() {
	// Read file "CSC450_CT5_mod5.txt" to text variable
	std::ifstream inputFile("CSC450_CT5_mod5.txt");
    std::string line;
    std::string text;
	while (std::getline(inputFile, line)) {
	    text += line + "\n";
	}
    inputFile.close();

    // Reverse text variable
	std::reverse(text.begin(), text.end());

	// Store this variable to "CSC450-mod5-reverse.txt"
	std::ofstream out;
	out.open("CSC450-mod5-reverse.txt");
	if (out.is_open())
	{
	    out << text << std::endl;
	}
	out.close();
	std::cout << "File has been written" << std::endl;
}

int main() {
    std::string userInput;


    // Put user input to file "CSC450_CT5_mod5.txt"
    std::cout << "Enter an user input: ";
    std::getline(std::cin, userInput);

    std::ofstream out("CSC450_CT5_mod5.txt", std::ios::app);
    if (out.is_open())
    {
        out << userInput << std::endl;
    }
    out.close();
    // Call the reverse function
    reverse();

    return 0;
}


