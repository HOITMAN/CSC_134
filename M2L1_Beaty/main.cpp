#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
   double Cost_Per_Cubic_Foot = .23;
   double Charge_Per_Cubic_Foot = .5;
   double length;
   double width;
   double hight;
   double volume;
   double cost;
   double charge;
   double profit;

   cout << "What are the dimensions of the box? (In feet)" << endl;
   cout << "(Please press ENTER after confirming the dimensions)" << endl;
   cout << "" << endl;
   cout << "length?" << endl;
   cin >> length;
   cout << "" << endl;
   cout << "width?" << endl;
   cin >> width;
   cout << "" << endl;
   cout << "hight?" << endl;
   cin >> hight;
   cout << "" << endl;

   volume = length*width*hight;
   cout << fixed << setprecision(2);
   charge = volume*Charge_Per_Cubic_Foot;
   cost = volume*Cost_Per_Cubic_Foot;
   profit = charge-cost;

   cout << "The volume of the crate is " << volume << "ft^3" << endl;
   cout << "Our cost of building the crate is $" << cost << endl;
   cout << "The price the costumer pays for the crate is $" << charge << endl;
   cout << "Our profit for this transaction is $" << profit << endl;




}


