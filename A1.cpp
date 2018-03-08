// CCN2042 Assignment 1
// Program template file: A1Template.cpp
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void showInfo()
{
	// Insert your codes to display your personal particulars here
	cout << "Name      : So Man Lung" << endl;
	cout << "Student ID: 17180545A" << endl;
	cout << "Class     : 202C" << endl;
}

void Q1()
{
	// Insert your codes for Question 1 here
	double a, A;                                       // a is store the side input A is store angle input
	const double PI = 3.1416;						  // define the pi value and calculate another side
	cin >> A;
	cin >> a;

	if ((A < 0 || A > 90) || a <= 0)	 // check the A is it less than 0 or lager than 90 and a is it less than 0 
	{
		cout << endl << "Error" << endl;	/* if the statement is ture it will output
											"Error" message to notice user input worng value */
	}

	else
	{
		cout << fixed << setprecision(3);       // set the all the value output is correct to 3 d.p.()
		cout << a << endl;
		cout << a / tan(A * PI / 180) << endl;	// calculate and output the side b
		cout << a / sin(A * PI / 180) << endl;	// calculate and output the side c
		cout << A << "°" << endl;
		cout << 180 - (A + 90) << "°" << endl;	// calculate and output the angle B
	}

	return;
}

void Q2()
{
	int num, sum = 0, count = 0;
	do {
		count++;
		cin >> num;

		if (count == 1 && num == 0)
		{
			cout << "Error" << endl;
			count = 0;
		}
		else if ()
		{
			break;
		}
		else if (count % 2 == 0)
		{
			sum = sum + pow(num, 3);
		}

		else
		{
			sum = sum - pow(num, 3);
		}
	} while (count < 9 || cin.eof());

	cout << sum << endl;

	return;
}

void Q3()
{
	// Insert your codes for Question 3 here
	int size;
	do {
		cout << endl;
		cin >> size;					// let user to input the size value to print the suitable bottle
		if (size < 2 || size > 6)		// check user input size is it correct
		{
			cout << "Error" << endl;
			cin >> size;
		}
	} while (size < 2 || size > 6);		// loop when user input size isn't correct and input angain until input correct

	for (int space = 0; space < 1; space++)   // loop of drawing the bottle
	{
		cout << setw(3);
		for (int repeat = 2; repeat > 0; repeat--)    //loop of drawing the bottle of the top
		{
			cout << setw(3);
			for (int top = 0; size > top; top++)
			{
				cout << "#";
			}
			cout << endl;
		}

		for (int gap = 0; (size - 2) > gap; gap++)		// loop of print endl; when the size - 2 is larger than 0
		{
			cout << setw(3) << "#" << setw(size - 1) << "#" << endl;
		}

		cout << setw(2) << "#" << setw(size + 1) << "#" << endl;		// print out the bridge
		cout << "#" << setw(size + 3) << "#" << endl;					// print out the bridge

		for (int gap = 0; (size + 4) > gap; gap++)			// loop of print endl; when the size + 4 is larger than 0
		{
			for (int down = 0; (size + 4) > down; down++) // drawing the bottom of the bottle
			{
				cout << "#";
			}
			cout << endl;
		}
	}

	return;
}

// GIVEN CODES, DO NOT MODIFY 
// BEGIN
int main()
{
	int prog_choice;

	showInfo();

	do {
		cout << endl;
		cout << "Assignment One - Program Selection Menu" << endl;
		cout << "---------------------------------------" << endl;
		cout << "(1) Program One" << endl;
		cout << "(2) Program Two" << endl;
		cout << "(3) Program Three" << endl;
		cout << "(4) Exit" << endl;
		cout << "Enter the choice: ";
		cin >> prog_choice;

		switch (prog_choice) {
		case 1: Q1(); break;
		case 2: Q2(); break;
		case 3: Q3(); break;
		case 4: break;
		default:
			cout << "Please enter choice 1 - 4 only." << endl;
			break;
		}
	} while (prog_choice != 4);

	cout << "Program terminates. Good bye!" << endl;
	return 0;
}
// END
