
#include "Header.h"



int main() {
	int num;
	cout << "enter number in [One, Two, Three]\n";
	cin >> num;
	if (num > 3 or num < 1) {
		cout << "U wrote wrong number\n";
	}

	int b_day;
	cout << "enter your b-day\n";
    try {
        cin >> b_day;
		if (b_day < 0) {
			throw SelfErrors(SelfErrors::LESS_THEN_ZERO);
		}
		else if (b_day > 2022) {
			throw SelfErrors(SelfErrors::BORN_IN_FUTURE);
		}
		else if (b_day < 1850) {
			throw SelfErrors(SelfErrors::YOU_DIDNT_BORN);
		}
    }
    catch (...) {}
}