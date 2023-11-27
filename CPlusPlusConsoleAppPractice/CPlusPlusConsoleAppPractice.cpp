// CPlusPlusConsoleAppPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <list>
// useful string methods //
int main() {
	std::string name;
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	// empty method will return a bool value based on if your string is empty or not //
	if (name.empty()) {
		std::cout << "you didnt type a name even for the string";
	}
	//	at method returns a character from a index specified in the string	//
	name.at(0);
	//	append method alsws add of a string to another string	//
	name.append("r");
	//	insert method adds a string at the specified index	//
	name.insert(
		/*index of where yo want to insert*/
			0,
		/*value that you want to insert in this string*/
		"D"
	);
	std::cout << "your name is now " << name;
	//	length method will get you the length of a string 	//
	if (name.length() > 12) {
		std::cout << "your name " << name;
		std::cout << " is more tham 12 characters. here is the character count of the string: " << name.length() << "\n"; 
	}
	//	clear method will delete every character in the string //
	name.clear();
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
