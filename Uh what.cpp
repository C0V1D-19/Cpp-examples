// Uh what.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

bool x;
bool x2;
int questionfunc();
void x2false();
int main()
{   // This is where the program goes when it starts aka its a function I'm sure you know this
	questionfunc();
	cout << "Ok hold on\n";
	Sleep(1000);

	if (x == true)
	{
		cout << "Correct\n You shall live in peace now \n";
		system("pause");
	}
	else if (x == false)
	{
		cout << "Incorrect\n";
		x2 = false;
	}

	if (x2 == false)
	{
		x2false();
	}

	return 0;
}

void x2false()
{
}

int questionfunc()
{
	// create input variable
	string input;

	//print test question
	cout << "write this backwards seY? \n";
	//take input
	cin >> input;

	//if input is yes/no set x accordingly
	if (input == "yes" || input == "Yes")
	{
		x = true;
	}
	else
	{
		x = false;
	}

	return x;
}

// NOTES:
	// << is used when printing strings and etc
	// cout is for printing
	//cin is for input
	//when you use "cin" you use >> instead of <<
	//-------------------------------------------
	//