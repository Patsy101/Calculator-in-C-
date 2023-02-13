class Calculator
	// Project made by Patrick Tricenio 13 February 2023
	// I had made a header file first before continuing to .cpp and client.cpp file
{

public:
    Calculator() ; // (Constructor) To set initial status
	void launch(); // to display initial instructions
	void readInput();// to get expression
	void writeOutput();// to display result.
	bool run();//(Accesor) to get current status
	
 private:
	 double number1, number2 ;// to store input numbers
	 char oper;//to store input operator 
	 bool status;// to store current status

};
