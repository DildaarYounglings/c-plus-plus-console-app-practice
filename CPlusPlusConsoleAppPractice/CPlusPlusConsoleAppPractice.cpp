// CPlusPlusConsoleAppPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>

int main() {
	char op;
	double num1;
	double num2;
	double result;

	std::cout << "************************************************** CALCULATOR **********************************************" << "\n";
	std::cout << " Enter eith {+ - * /} to choose your opperation \n";
	std::cin >> op;
	std::cout << " Enter 1st number \n";
	std::cin >> num1;
	std::cout << " Enter 2nd number \n";
	std::cin >> num2;
	switch (op)
	{
		case '+':
			result = num1 + num2;
			std::cout << "result: " << result << '\n';
			break;
		case '-':
			result = num1 - num2;
			std::cout << "result: " << result << '\n';
			break;
		case '*':
			result = num1 * num2;
			std::cout << "result: " << result << '\n';
			break;
		case '/':
			result = num1 / num2;
			std::cout << "result: " << result << '\n';
			break;
		default:
			std::cout << " Try again and invalid character or response typed:" << op;
			break;
	}
	std::cout << "************************************************************************************************************" << "\n";

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
