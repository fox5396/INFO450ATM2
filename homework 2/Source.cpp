#include <iostream>
using namespace std;

//declare universal variables, functions, arrays
void numberOfBills(int &billCount);
int billDenoms[] = { 1, 5, 10, 20, 50 };
int cashAmount = 0;

int main()
{
	//declare and instantiate variables
	char oneMore;
	//declare array?

	//request user input
	cout << "Please enter the desired withdrawal amount:" << endl;
	cin >> cashAmount;

	//check if the input is valid
	while (cashAmount > 300 || cashAmount < 1)
	{
		cout << "Sorry, you have entered an invalid amount. Please enter another amount." << endl;
		main();
	}
	
	//calculate the amount of each denomination needed
	numberOfBills(cashAmount);


	//ask user if they would like to withdraw more money
	cout << "If you would like to make another transaction, enter Y.\n To quit, enter 0." << endl;
	cin >> oneMore;

	//return to main() if the answer = y or Y
	while (oneMore == 'Y' || oneMore == 'y')
	{
		main();
	}

	//exit if the answer = 0
	if (oneMore == 0)
	{
		return 0;
	}

	system("pause");
	return 0;

}

void numberOfBills(int &billCount)
{
	int remainder, i = 4;

	//for loop to calculate the number of each denomination for withdrawal
	while(i >= 0)
	{
		billCount = cashAmount / billDenoms[i];
		
		//display results to the user
		cout << "You will receive " << billCount << " $" << billDenoms << " bills.\n" << endl;
		
		remainder = cashAmount % billDenoms[i];
		--i;
	}
}


	