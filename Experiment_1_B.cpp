/*Write a program that accepts as input the mass, in grams, and density, in grams per cubic
centimeters, and outputs the volume of the object using the formula: density ¼ mass / volume. Format your output to
two decimal places. */

#include <iostream>
#include <iomanip>
//#include <conio.h>

using namespace std;

int main ()
{
	double mass;
	double density;
	
	cout << "Insert Mass in grams (g):";
	cin >> mass;
	
	cout << "Insert Density in grams per cubic centimeter (g/cm^3):";
	cin >> density;
	
	double volume = (mass/density);
	
	cout << "The Volume is: " << volume << " cm^3" <<endl;
	
	
//	getch ();
	return 0;
	
	
	
}
