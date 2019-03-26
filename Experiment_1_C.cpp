/* Interest on a credit’s card unpaid balance is calculated using the average daily. Suppose that netBalance
is the balance shown in the bill, payment is the payment made, d1 is the number of days in the billing cycle, and d2 is
the number of days payment is made before billing cycle. Then the average daily */
#include <iostream>
#include <iomanip>
//#include <conio.h>

using namespace std;

int main ()
{
// Declarations for Variables
	double netBalance;
	double payment;
	int d1;
	int d2;
	double intRate;
	
	
// Declaration for Decimals
	cout << fixed << showpoint << setprecision(2) << endl;

// Note to self: Never put the formulas before the input of
// the variables.
	
// Input-Output
	cout << "What is the netBalance?: \n$"; 
	cin >> netBalance;
	
	cout << "What is the payment made?: \n$";
	cin >> payment;
	
	cout << "what is the number of days in the billing cycle?: \n";
	cin >> d1;
	
	cout << "What is the number of days the payment has been made before the billing cycle?: \n";
	cin >> d2;
	
	cout << "What is the interest rate per month?:" <<endl;
	cin >> intRate;
	
// Grouped formula:
/*
	double netd1 = (netBalance*d1);
	double paymentd2 = (payment*d2);
	double netpay = (netd1-paymentd2);
	double Average = (netpay)/d1;
	double interest = (Average * intRate);
*/

// original formula is
	double Average = (netBalance*d1 - payment*d2)/d1;
	double interest = (Average * intRate);
	
	
	cout << "The interest on your credit card's unpaid balance is: $" << interest<<endl;

// 	getch ();	
	return 0;
}

