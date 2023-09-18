#include <iostream>

using namespace std;

/*
M3T1
Beaty
9/18/23

For this assignment you will create a program to match the following specifications.

Ask the user to enter the length and width of two rectangles, then display the area of both.

Part 2: Add Additional Features

Ask the user to enter the length and width of two rectangles, then display the area of both.

Tell the user which rectangle has the larger area, or if they are the same area. (Use the if statement for this.)
*/

int main()
{
  cout << "Areas of Rectangles" << endl;
  //declare variables
  double length1, length2, width1, width2, area1, area2;
  //ask for length and width of first rectangle
  cout << "Rectangle 1 length? ";
  cin >> length1;
  cout << "Rectangle 1 width? ";
  cin >> width1;
  //Rectangle 2
  cout << "Rectangle 2 length? ";
  cin >> length2;
  cout << "Rectangle 2 width? ";
  cin >> width2;
  //Calc area

  area1 = length1 * width1;
  area2 = length2 * width2;
  cout << " " << endl;
  cout << "Rectangle 1 area is: " << area1 << endl;
  cout << "Rectangle 2 area is: " << area2 << endl;

  //comparison
  cout << " " << endl;
  if (area1 > area2) {
    cout << "Rectangle 1 is larger." << endl;
  }
  else if (area2 > area1) {
    cout << "Rectangle 2 is larger." << endl;
  }
  else {
    cout << "The rectangles are of equal size" << endl;
  }
}
