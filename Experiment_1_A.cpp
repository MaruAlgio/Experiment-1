#include <iostream>
#include <string>
//#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	string Box = "";
	string Premium = "";
	string Sideline = "";
	string GenAd = "";
	double TicketA = 3750.00;
	double TicketB = 28000.00; 
	double TicketC = 35750.00;
	double TicketD = 18750.00;
	float PriceA = 250.00;
	float PriceB = 100.00;
	float PriceC = 50.00;
	float PriceD = 25.00;
	float TotalA = TicketA * PriceA;
	float TotalB = TicketB * PriceB;
	float TotalC = TicketC * PriceC;
	float TotalD = TicketD * PriceD;
	
	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "Ticket Sales" << endl;
	cout << "Type" << "\t	Price" << endl;
	cout << "Box" << "\t	$250.00" << endl;
	cout << "Sideline\t" << "$100.00" << endl;
	cout << "Premium" << "\t	$50.00" << endl;
	cout << "GenAd" << "\t	$25.00" << endl;
//first enter - Sales
  if (cin.get() == '\n')
    cout << "Total Sales";
  else
    cout << "Total Sales\n";
//second enter - Ticket sales values
	if (cin.get() == '\n')
		cout << "Box		$5750.00\n" << "Sideline	$28000.00\n" << "Premium		$35750.00\n" << "GenAd		$18750.00\n" << endl;
	
	else
    	cout << "Box		5750\n" << "Sideline		28000\n" << "Premium		35750\n" << "GenAd		18750\n" << endl;
//3rd enter - Computation
  if (cin.get() == '\n')
	cout << "Total Sold - Box\n"<< "3750 * $250 = $" << TicketA * PriceA << "\n";
  else
    cout << "Total Sales\n";
    // 4th enter sideline computation
	if (cin.get() == '\n')
	cout << "Total Sold - Sideline\n"<< "28000 * $100 = $" << TicketB * PriceB << "\n";
	
	
	//5th enter
	  if (cin.get() == '\n')
	cout << "Total Sold - Premium\n"<< "35750 * $50 = $" << TicketC * PriceC << "\n";
	
	//6th enter
		  if (cin.get() == '\n')
	cout << "Total Sold - GenAd\n"<< "18750 * $25 = $" << TicketD * PriceD << "\n\n";
	
	//total enter
		  if (cin.get() == '\n')
	cout << "Type\t\tTotalSold\n"<< "Box\t	$" << TotalA << "\nSideline	$" << TotalB << "\nPremium\t	$" << TotalC << "\nGenAd\t	$" << TotalD << endl;
	
	//Grand Total
	 if (cin.get() == '\n')
	 cout << "Grand Total\n" << "$ " << TotalA+TotalB+TotalC+TotalD << endl;
	    	
    	
    	//ALWAYS PRESS "ENTER" TO PROCEED WITH NEXT LINE//
    

//	getch();
	return 0;
}

