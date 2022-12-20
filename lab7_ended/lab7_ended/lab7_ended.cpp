#include "Header.h"

map<string, int> Settings::self_map;

int main() {
	// 1st task
	string user_string;
	int founded = 0;
	cout << "enter string\n";
	getline(cin, user_string);
	cout << user_string[1] << user_string[2] << user_string[3] << endl;
	for (int i = 0; i < user_string.size(); i++) {
		if (user_string[i] == 'a') founded = i;
	}  
	if (founded != 0) cout << founded << "\n";
	else cout << "Char doesn`t found\n";
	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


	// 2nd task
	string name; 
	cout << "enter your name\n";
	cin >> name;
	cout << verify_name(name) << endl;


	string email = "first@mail.ru bethesda rockstar second@mail.ru ";

	string str = "";
	for (int i = 0; i < email.size(); i++) {
		if (email[i] != ' ') {
			str = str + email[i];
		}
		else {
			verify_email(str);
			str = "";
		}

	}

	//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// 3rd task
	double radius;
	cout << "enter radius\n";
	cin >> radius;
	cout << round((2 * PI * radius) * 1000) / 1000 << endl;
	
	// file in/out
	fstream fs;
	string file_ou;


		// endless cycle
	fs.open("a.txt", ios::out);
	while (1) {
		cout << "Enter your string:\n";
		getline(cin, file_ou);


		if (file_ou == "read") {
			fs.close();
			fs.open("a.txt", ios::in);
			string line;
			while (getline(fs, line)) {
				cout << line << endl;
			}
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
			fs.open("a.txt", ios::app);
			fs << file_ou << endl;
		}
	}
		try {
			fs.close();
		}
		catch (...) {
			cout << "File already closed";
		}

		//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// 4th task
		vector<float> vec = { 1, 2, 3, 4, 5 };
		print_vector(vec);
		for (int i = 0; i < vec.size(); i++) {
			if (i == 2) vec.push_back(20021);
		}
		print_vector(vec);
		vec.pop_back();
		print_vector(vec);

		// Settings map;
		// map.add("one", 20);
		// map.add("two", 8);
		// cout << map.get("one") << endl;
		// map.print();
		Settings::add("one", 20);
		Settings::add("two", 8);
		cout << Settings::get("one") << endl;
		Settings::print();
}