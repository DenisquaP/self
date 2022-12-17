#include "Header.h"

int main() {
	// 1st task
	string user_string;
	int founded = 0;
	cout << "enter string\n";
	getline(cin, user_string);
	cout << user_string[1] << user_string[2] << user_string[3];
	for (int i = 0; i < user_string.size(); i++) {
		if (user_string[i] == 'a') founded = i;
	}  
	if (founded != 0) cout << founded;
	else cout << "Char doesn`t found";
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


	// 2nd task
	string name; 
	cout << "enter your name\n";

	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// 3rd task
	double radius;
	cout << "enter radius\n";
	cin >> radius;
	cout << round((2 * PI * radius) * 1000) / 1000;
	
	// file in/out
	fstream fs;
	string file_ou;

	cout << "Enter your string:\n";
	getline(cin, file_ou);
		// endless cycle
	fs.open("a.txt", ios::out);
	while (1) {
		cout << "Enter your string:\n";
		getline(cin, file_ou);


		if (file_ou == "read") {
			string data;
			string line;
			while (getline(fs, line)) {
				data += line + "\n";
			}
			cout << data;
		}
		else if (file_ou == "erase") {
			fs.close();
			remove("a.txt");
			fs.open("a.txt", ios::in);
		}
		else if (file_ou == "exit") {
			break;
		}
		else {
			fs.close();
			fs.open("a.txt", ios::in);
			fs << file_ou;
		}
	}
		try {
			fs.close();
		}
		catch (...) {
			cout << "cant close file";
		}

}