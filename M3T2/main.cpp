#include <iostream>
#include <cstdlib>

using namespace std;

/*
CSC 134
M3T2
Beaty
9/18/23

The player rolls two 6-sided dice (abbreviated 2d6.)
7 or 11 -> instant win
2, 3, or 12 -> instant loss
*/
int roll(){
    // new function: roll a d6
    int roll = rand() % 6 + 1;
    return roll;
    }

int main()
{


   cout << "Welcome to the Craps table" << endl;
   int die1, die2, total;
   //roll is 2d6
   int seed;
   cout << "Enter your lucky number: ";
   cin >> seed;
   srand(seed);

   die1 = roll();
   die2 = roll();
   total = die1 + die2;
   cout << die1 << "+" << die2 << endl;
   cout << "You rolled: " << total << endl;

   //Do if / else if for:
   //7 or 11 (win)
   //2, 3, 12 (lose)
   if (total == 7 || total == 11){
   // || is or
   cout << "You win!" << endl;
   }
   else if (total == 2 || total == 3 || total == 12){
    cout << "You lose );" << endl;
   }
   else {
    cout << "Roll again!" << endl;
   }
    return 0;
}
