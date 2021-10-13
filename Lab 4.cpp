#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	int input1, input2, input3, input4, input5; // creates variables
	ifstream infile; // reads file
	infile.open("temperature.dat"); // uses data from file

	infile >> input1 >> input2 >> input3 >> input4 >> input5; // brings in the data as variables

	int bars = input1 / 3; 
	int bars2 = input2 / 3;
	int bars3 = input3 / 3;
	int bars4 = input4 / 3;
	int bars5 = input5 / 3; // divides numbers from files by 3 to find how many stars there should be

	string stars = "";
	string stars2 = "";
	string stars3 = "";
	string stars4 = "";
	string stars5 = ""; // creates strings called stars

	for (int i = 0; i < bars; i++) // add numbers to i before becoming equal to bars
	{
		stars = stars + "*"; //assigns stars as 3 degrees to represent the temperature
	}
	for (int i = 0; i < bars2; i++)
	{
		stars2 = stars2 + "*";
	}
	for (int i = 0; i < bars3; i++)
	{
		stars3 = stars3 + "*";
	}
	for (int i = 0; i < bars4; i++)
	{
		stars4 = stars4 + "*";
	}
	for (int i = 0; i < bars5; i++)
	{
		stars5 = stars5 + "*";
	} 

	cout << input1 << "|         " << stars << endl; //Outputs the temp and the bars made of stars with each star representing 3 degrees
	cout << input2 << " |         " << stars2 << endl;
	cout << input3 << " |         " << stars3 << endl;
	cout << input4 << " |         " << stars4 << endl;
	cout << input5 << "  |         " << stars5 << endl;

	cout << "   |_____________________________________________________"; // line dividing bars from range

	cout << "\n" << - 30 << "          0                                        " << 120 << endl; // shows range of temperatures

	return 0; // makes sure code ran successfully
}
