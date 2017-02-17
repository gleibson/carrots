// uses and displays a variable
#include<iostream>

int main()
{
	int carrots;
	
	std::cout << "How many carrots do you have?" << '\n';
	std::cin >> carrots; 
	std::cout << "Here are two more. " << "\n\n";
	carrots = carrots + 2; 
	std::cout << "Now you have " << carrots << " carrots." << "\n\n";
		
	return 0;
}
