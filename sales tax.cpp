// sales tax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
	//declaring variables
	float purchase = 95;
	float state_tax = 4.0;
	float county_tax = 2.0;

	//calculating the tax 
	float total_state_tax = purchase * (state_tax / 100.0);
	float total_county_tax = purchase * (county_tax / 100.0);

	//calculating the total cost 
	float total_cost = purchase + total_state_tax + total_county_tax;
	
	//printing output
	std::cout << R"(This program calculates the total cost including sales tax and county tax.)";
		std::cout << "Total cost:$" << total_cost;
  




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
