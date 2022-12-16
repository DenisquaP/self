#include "Header.h"

int main() {
	// 1st task
	string user_string;
	cout << "enter string\n";
	getline(cin, user_string);
	cout << user_string[1] << user_string[2] << user_string[3];
	for (int i = 0; i < user_string.size(); i++) {
		if (user_string[i] == 'a') cout << i << endl;
	}
	// 2nd task
	string name; 
	cout << "enter your name\n";


	// 3rd task
	double radius;
	cout << "enter radius\n";
	cin >> radius;
	cout << ((2 * PI * radius) * 100)/100;
	

}