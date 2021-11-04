#include<iostream>
using namespace std;
int main() {
	string inventory[10];
	string input;
	cout << "Welcome player! How are you?" << endl << endl;
	while (input != "q") {
	cout << "This is my shop. You can buy potions." << endl;
	cout << "To buy a healing potion type 'h', to buy a speed potion type 's', to buy a jump potion type 'j', and to buy a flying potion type 'f'. Press i for inventory. Press 'q' to leave the shop." << endl;
	cin >> input;
	if (input.compare("h") == 0) {
		inventory[0] = "Healing potion";
		cout << "You bought a healing potion!" << endl << endl;
	}
		else if (input.compare("s") == 0) {
			inventory[1] = "Speed potion";
			cout << "You bought a speed potion!" << endl << endl;
		}
		else if (input.compare("j") == 0) {
		inventory[2] = "Jump potion";
		cout << "You bought a jump potion!" << endl << endl;
		}
		else if (input.compare("f") == 0) {
		inventory[3] = "Flying potion";
		cout << "You bought a flying potion!" << endl << endl;
		}

		else if (input == "i") {
			cout << "Here is your inventory:" << endl;
			for (int i = 0; i < 10; i++)
				cout << inventory[i]<<endl;
			cout << endl << endl;
		}

	}
	cout << "Thanks for buying to leave press 'q'." << endl;
}
