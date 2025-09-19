#include <iostream>
#include <conio.h>
using namespace std;

void analyze_pointer(int *ptr);

int main() {
	int iValue = 10;
	int* ptr = &iValue;
	analyze_pointer(ptr);

	int* hValue = new int(5);
	analyze_pointer(hValue);

	_getch();
	return 0;
}

void analyze_pointer(int *ptr) {
	cout << "The memory location pointed: " << ptr << endl;
	cout << "Value of the integer:  " << *ptr << endl << endl;
}