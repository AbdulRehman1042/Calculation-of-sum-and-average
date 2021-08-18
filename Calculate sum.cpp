// THIS PROGRAM IS TO CALCULATE "SUM" & "AVERAGE" OF 2 NUMBERS

# include <iostream>
using namespace std;
int main()
{
	int num1 , num2 ;
	int sum , avg ;
	cout << "Entert value of number 1 : " ;
	cin >> num1 ;
	cout << "Enter value of number 2 : " ;
	cin >> num2 ;
	
	// now we calculate sum of two numbers
	
	sum = num1 + num2 ;	
	cout << "The sum of 2 numbers is equal to : " << sum ;
	cout << endl ; 
	// now we calculate average of two numbers
	
	avg = sum / 2 ; 
	cout << "The average of two numbers is equal to : " << avg ;
	
	return 0;
}
