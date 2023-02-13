#include "ops.h"// my reference header file 
#include <iostream>

using namespace std;

Calculator:: Calculator()

{status = true;} // initialising status
void Calculator::launch()// Displaying instructions
{
	cout << endl << "******* Project 2*********" << endl;// introducing my projecy
	cout << endl << "***Sum Calculator****" << endl;// visible in Graphical User Interface//
	cout << endl << "******* By Patrick Tricenio******" << endl;// Author

	cout << "Enter a number, an operator (-,+,/,*,), and another number."//instructions 
		<< endl << "Hit Return or enter to calculate. click the X Tab if finish" << endl;//instructions


}

void Calculator::readInput()// get expression
{
	cout << ">"; cin >> number1; // get 1st number
	if (number1 == 0) status == false;// exit if 0 due to some bug if pressing zero it will not exit, click the x tab to exit

	else { cin >> oper; cin >> number2; } //or get the rest of the number

}

void Calculator::writeOutput() // Display result.

{
	if (status) switch (oper) // If continuing.
	{ // show result.
	case '+': { cout << (number1 + number2) << endl; break;}// Addition 1+1=2
	case '-': { cout << (number1 - number2) << endl; break;}// subtraction eg 10-5=5
	case '*': { cout << (number1 * number2) << endl; break;}// Multiplication num1 * num2
	case '/':  if (number2 != 0)
		cout << (number1 / number2) << endl;// any number divided except 0
			else cout << "Cannot divide by 0" << endl; // Division cannot be divided by 0
	}
}

bool Calculator::run ()
{return status;} // getting the current status


int main() // main console
{

	Calculator* pCalc = new Calculator; // using pointers instead of reference 

	pCalc->launch();// ops.h launch () to start

	while (pCalc->run())// while calculator running
	{
		pCalc->readInput();// reads the number and the case added by the user 
		pCalc->writeOutput();// console is assigned to present back the result, addded bby the user
	}

	return 0;
}

// What i find challenging
// 1. Seperating the Compiler and Linker 
// 2. Creating Pointers 
// 3. Making Abstract Data type