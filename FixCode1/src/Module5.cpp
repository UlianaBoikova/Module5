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
	std::ifstream inputFile("CSC450_CT5_mod5.txt");  // Открытие файла для чтения
    std::string line;
    std::string text;
	while (std::getline(inputFile, line)) {
	    text += line + "\n";  // Вывод строки на экран
	}
    inputFile.close();

	std::reverse(text.begin(), text.end());

	std::ofstream out;          // поток для записи
	out.open("CSC450-mod5-reverse.txt");      // открываем файл для записи
	if (out.is_open())
	{
	    out << text << std::endl;
	}
	out.close();
	std::cout << "File has been written" << std::endl;
}

int main() {
    std::string userInput;


    // Step 1: Obtain user input
    std::cout << "Enter an user input: ";
    std::getline(std::cin, userInput);

    std::ofstream out("CSC450_CT5_mod5.txt", std::ios::app);
    if (out.is_open())
    {
        out << userInput << std::endl;
    }
    out.close();
    reverse();

    return 0;
}


