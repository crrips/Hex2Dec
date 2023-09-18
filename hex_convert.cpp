#include <iostream>
#include <string>
using namespace std;

int navigate;

void Menu() {
	cout << "(1) HEX to Little Endian" << endl
		<< "(2) HEX to Big Endian" << endl
		<< "(3) Little Endian to HEX" << endl
		<< "(4) Big Endian to HEX" << endl << endl
		<< "Enter your selection: ";
	cin >> navigate;
}

void hex2little() {
	
	system("cls");
	cout << "Enter HEX: 0x";

	unsigned long long lit = 0;
	int tmp_length;
	string hex, tmp_hex;
	cin >> hex;

	int bytes = hex.length()/2;

	int left = 0;
	int right = hex.length() - 1;

	
	for (int i = 0; i < bytes / 2; i++) {

		swap(hex[left], hex[right - 1]);
		swap(hex[right], hex[left + 1]);

		left += 2; right -= 2;

	}
	
	tmp_length = hex.length();

	for (int i = 0; i < hex.length(); i++){
		tmp_hex = hex[i];

		if (tmp_hex == "A" || tmp_hex == "a") {
			lit += 10 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "B" || tmp_hex == "b") {
			lit += 11 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "C" || tmp_hex == "c") {
			lit += 12 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "D" || tmp_hex == "d") {
			lit += 13 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "E" || tmp_hex == "e") {
			lit += 14 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "F" || tmp_hex == "f") {
			lit += 15 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "0") {
			lit += 0;
		}
		else {
			lit += stoi(tmp_hex) * pow(16, tmp_length - 1);
		}

		tmp_length--;
	}

	cout << "\nLittle endidan: " << lit << endl << endl;
	
	system("pause");

}

void hex2big() {	// working incorrect with big numbers

	system("cls");
	cout << "Enter HEX: 0x";

	unsigned long long big = 0;
	int tmp_length;
	string hex, tmp_hex;
	cin >> hex;
	
	tmp_length = hex.length();

	for (int i = 0; i < hex.length(); i++){
		tmp_hex = hex[i];

		if (tmp_hex == "A" || tmp_hex == "a") {
			big += 10 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "B" || tmp_hex == "b") {
			big += 11 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "C" || tmp_hex == "c") {
			big += 12 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "D" || tmp_hex == "d") {
			big += 13 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "E" || tmp_hex == "e") {
			big += 14 * pow(16, tmp_length - 1);
		}
		else if (tmp_hex == "F" || tmp_hex == "f") {
			big += 15 * pow(16, tmp_length - 1);
		}
		else {
			big += stoi(tmp_hex) * pow(16, tmp_length - 1);
		}

		tmp_length--;
	}

	cout << "\nBig endidan: " << big << endl << endl;

	system("pause");

}

void little2hex() {

	system("cls");
	cout << "Enter Little Endian: ";

	string digits[16] = { "0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f" };
	unsigned long long dec;
	cin >> dec;
	string hex;

	while (dec != 0) {
		hex.insert(0, digits[dec % 16]);
		dec /= 16;
	}

	int bytes = hex.length() / 2;

	int left = 0;
	int right = hex.length() - 1;

	for (int i = 0; i < bytes / 2; i++) {

		swap(hex[left], hex[right - 1]);
		swap(hex[right], hex[left + 1]);

		left += 2; right -= 2;

	}

	cout << "\nHEX: 0x" << hex << endl << endl;

	system("pause");

}

void big2hex() {	// working incorrect with big numbers

	system("cls");
	cout << "Enter Big Endian: ";

	string digits[16] = { "0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f" };
	unsigned long long dec;
	cin >> dec;
	string hex;

	while (dec != 0) {
		hex.insert(0, digits[dec % 16]);
		dec /= 16;
	} 
	cout << "\nHEX: 0x" << hex << endl << endl;

	system("pause");
}

int main() {

	Menu();

	switch (navigate) {
	case 1:
		hex2little();
		break;
	case 2:
		hex2big();
		break;
	case 3:
		little2hex();
		break;
	case 4:
		big2hex();
		break;
	}

	return 0;
}
