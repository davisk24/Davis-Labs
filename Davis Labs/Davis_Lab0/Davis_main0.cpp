//Author: Kyle Davis
//CLass: CS&P Section 3
//Date: 1/23/19
//Description: Program sums up all # from 0 to N.

//Test Suite
//Typical
//Input 2: output: 3

#include <iostream>
using namespace std;
#define MAX_NUM_TRIES 2
int main()
{
	int number_of_tries;
	int input_integer;
	int sum;
	int i;
	// Explain the purpose of the program to the user 
	cout << " This program computes the sum of integers from 0 \n";
	cout << " to an entered number between 1 and 15!\n";
	cout << "=====================================\n\n";
	// Get Input 
	cout << "Please input the number between 1 and 15:  ";
	cin >> input_integer;
	number_of_tries = 0;
	while ((number_of_tries < MAX_NUM_TRIES) &&
		((input_integer > 15) || (input_integer < 1)))
	{
		cout << "\nThe number should be between 1 and 15!\n";
		cout << "Please input the number between 1 and 15:  ";
		cin >> input_integer;
		number_of_tries++;
	}
	cout << "\n";
	// Verify if the user entered a proper integer after MAX_NUM_TRIES 
	if ((input_integer > 15) || (input_integer < 1))
	{
		cout << "Sorry, but I cannot compute the sum for provided integer!\n";
		return 0;
	}
	// Compute the sum 
	sum = 0;
	for (i = 0; i < input_integer; i++)
	{
		sum = sum + (i + 1);
	}
	// Output the results 
	cout << "Sum of  integers from 0 to " << input_integer << " is " << sum << "\n";
	cout << "=====================================\n\n";
	return 0;
}