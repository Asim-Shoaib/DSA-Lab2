#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

void reverseString(char* str);

int main() {
	int length;
	cout << "Enter the length of the string: ";
	cin >> length;
	cin.ignore(); // Clear newline from buffer

	char* str = new char[length + 1];
	cout << "Enter the string: ";
	cin.getline(str, length + 1);
	
	// Call the function to reverse the string
	reverseString(str);

	cout << "Reversed string: " << str << endl;

	delete[] str;
	
	_getch();
	return 0;

}

void reverseString(char* str) {
	int n = strlen(str);
	for (int i = 0; i < n / 2; ++i) {
		char temp = str[i];
		str[i] = str[n - i - 1];
		str[n - i - 1] = temp;
	}
}
