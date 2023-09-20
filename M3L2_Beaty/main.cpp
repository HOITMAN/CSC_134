
#include <iostream>
using namespace std;

/*
M3L2
Beaty
CSC-134
*/

int main() {

  // this program will ask a question and respond to it.
  // You should run it, and test it by typing in different values.
  // Example test values: 1, 2, 3, banana (try all of them)

  // declare the variable we need
  int choice;

  // ask the question
  cout << "You find yourself in a dimly lit passage way, the only light eminating from torches placed at irregular intervals spanning seemingly infinitely in both directions." << endl;
  cout << "You see that the walls are flat and made of some sort of gray stone with places along the wall have collapsed reveling patches of dirt behind the wall." << endl;
  cout << "The air is moist and there are patches of moss that coat the walls. Who or whatever built this tunnel has clearly not been here for a very long time." << endl;
  cout << "You think to yourself \"If this place was abandoned then why are the torches still lit?\"" << endl;
  cout << "As you are pondering this you hear grunting and the sound of bare feet slapping against the stone floor coming from behind you." << endl;
  cout << "You turn around and see a humanoid figure no larger than three and a half feet tall."
  cout << "As the figure passes by one of the torches you can see that the creatures skin is a dull green. It appears to be a goblin but it seems to be lost in thought and hasn't noticed you yet." << endl;
  cout << "You notice a shine coming from the goblins right hand and you see a dagger, its metal reflecting the torchlight making it hard to look at." << endl;
  cout << "You start to step back slowly trying not to make any large movements as to not alert the goblin to your presence."
  cout << "Do you choose Door 1 or Door 2?" << endl;
  cout << "Type 1 or 2: ";
  cin >> choice;

  // using if, make a decision based on the user's choice

  if (1 == choice) {
  	cout << "You chose Door 1" << endl;
  }
  else if (2 == choice) {
  	cout << "You chose Door 2" << endl;
  }
  else {
  	cout << "I'm sorry, that is not a valid choice." << endl;
  }

  // finish up
  cout << "Thanks for playing!" << endl; // this runs no matter what they choose
  return 0; // exit without error

} // end of the main() method
