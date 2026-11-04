// ArrayTest.cpp - Anna Myers - November 2, 2026
// Description: Four array functions that examine a passed array of ints, plus a 
// test harness (step 1) and input loop (step 2)

#include <iostream>
using namespace std;

// 
void displayRun(int values[], int size) {
	for (int i = 0; i < size; i++) {
		// Compare with neighbors, check bounds first
		bool sameAsPrev = (i > 0 && values[i] == values[i - 1]);
		bool sameAsNext = (i < size - 1 && values[i] == values[i + 1]);

		if (i > 0)
			cout << " ";
		if (!sameAsPrev && sameAsNext)
			cout << "(";
		cout << values[i];
		if (sameAsPrev && !sameAsNext) 
			cout << ")";
	}
	cout << endl;

}
// Returns true if any two adjacent values are equal
bool hasRun(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] == values[i + 1]) {
			return true;
		}
	}
	return false;
}