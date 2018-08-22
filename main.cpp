#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
const int length = 8;
	cout << "Unicode braille generator" << endl;
	cout << "Version 0.1" << endl;
	cout << "Created by Vadim Kholodilo" << endl;
	string binaryInput = string("");
	cout << "Enter braile dots" << endl;
	getline(cin, binaryInput);
	if (binaryInput.length() < length) {
	while(binaryInput.length() != length) {
			binaryInput += "0";
		}
	}
	int halfLength = length / 2; // Чтоб в цикле не считать постоянно одно и то же
	string temp;
	for (int i = 0; i <= halfLength-1; i++) {
		temp[0] = binaryInput[i];
		binaryInput[i] = binaryInput[length - i - 1];
		binaryInput[length - i - 1] = temp[0];
	}
	int result = 10240; // Отсюда начинается таблица Брайля в unicode
	for (int i = 0; i <= length-1; i++) {
		result += (binaryInput[length - i - 1] - 48) * pow(2, i);
	}
	cout << result << " - decimal" << endl;
	cout << hex << result << " - hex" << endl;
	#ifdef _WIN32
	system("pause");
	#else
		system("read");
	#endif
	return 0;
}

