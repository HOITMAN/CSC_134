#include <iostream>
#include <iomanip>
using namespace std;

/*
M2T2
Receipt Calculator V2
Beaty
9/11/23
This program should take the price of a meal, which is $5.99, and print out a simple text receipt.
It should include:
The price before tax
The amount of tax owed (7%)
The total including tax

User should enter:
- The name of food item
- Its price
- How many they want
*/

int main() {

cout << "Receipt Calculator" << endl;
// TODO: Ask the user the meal price

double menu_price = 5.99;
double tax_rate = 0.07;
double tax_amount;
double total;

tax_amount = tax_rate * menu_price;
total = menu_price + tax_amount;

cout << fixed << setprecision(2);

cout << "Thank you for dining with us." << endl;
cout << "Your meal total is $" << menu_price << endl;
cout << "_______________________" << endl;
cout << "The tax is $" << tax_amount << endl;
cout << "Your total is $" << total << endl;


return 0;
}
