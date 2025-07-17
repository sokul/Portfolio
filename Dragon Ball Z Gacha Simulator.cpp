#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void Menu() {
	cout << "\nChoose an option:\n";
	cout << "(S)ingle Pull\n";
	cout << "(T)en Pull\n";
	cout << "(P)ity Pull\n";
	cout << "(L)eave\n";
	cout << "Your choice: ";
}

string CommonPool() {
	int choice = rand() % 4;
	        if (choice == 0) return "Goku";
		else if (choice == 1) return "Vegeta";
		else if (choice == 2) return "Master Roshi";
		else return "Krillen";
}

string RarePool() {
	int choice = rand() % 3;
		if (choice == 0) return "SSJ Goku";
		else if (choice == 1) return "SSJ Vegeta";
		else return "Kaioken Krillen";
}

string SuperPool() {
	int choice = rand() % 2;
	        if (choice == 0) return "SSJ Blue Goku";
		    else return "SSJ Blue Vegeta";
}

string UltraPool() {
	return "Ultra Instinct Goku";
}

string SinglePull() {
	int roll = rand() % 100 + 1; // 1 to 100
	        if (roll <= 50) {
		return CommonPool(); // 50%
		} else if (roll <= 80) {
		return RarePool(); // 30%
		} else if (roll <= 96) {
		return SuperPool(); // 16%
		} else {
		return UltraPool(); // 4%
		}
}

string TenPull() {
	string result = "";
		for (int i = 0; i < 10; i++) {
		result += to_string(i + 1) + ". " + SinglePull() + "\n";
	}
		return result;
}

string PityPull() {
	int roll = rand() % 100 + 1; // 1 to 100
	        if (roll <= 90) {
		return SuperPool(); // 90% chance
		} else {
		return UltraPool(); // 10% chance
	}
}

int main() {
	srand(time(0));
	char choice;
		cout << "DBZ Gacha Simulator!" << endl;
		do {
		Menu();
		cin >> choice;
		choice = toupper(choice);
		
		if (choice == 'S') {
			cout << "You pulled: " << SinglePull() << endl;
		} else if (choice == 'T') {
			cout << "Ten Pull Results:" << endl;
			cout << TenPull();
		} else if (choice == 'P') {
			cout << "Pity Pull: " << PityPull() << endl;
		} else if (choice == 'L') {
			cout << "Thanks for playing!" << endl;
		} else {
			cout << "Invalid choice, try again!" << endl;
																								
		}

		} while (choice != 'L');

			    return 0;
}

