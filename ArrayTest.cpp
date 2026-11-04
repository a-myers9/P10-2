// ArrayTest.cpp - Anna Myers - November 2, 2026
// Description: Four array functions that examine a passed array of ints, plus a 
// test harness (step 1) and input loop (step 2)

#include <iostream>
using namespace std;

// Returns true if every element is >= the one before it (increase)
bool isSortedIncreasing(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] > values[i + 1]) {
			return false;
		}
	}
	return true;
}

// Returns true if every element is <= the one before it (decrease)
bool isSortedDecreasing(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] < values[i + 1]) {
			return false;
		}
	}
	return true;
}

// Returns true if two elements next to each other are equal
bool hasAdjacentDuplicates(int values[], int size) {
	for (int i = 0; i < size - 1; i++) {
		if (values[i] == values[i + 1]) {
			return true;
		}
	}
	return false;

}

// Returns true if any two elements are equal, adjacent or not
bool hasDuplicates(int values[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 1 + 1; j < size; j++) {
			if (values[i] == values[j]) {
				return true;
			}
		}
	}
	return false;
}

// Step 1 Helper: prints the four results for one array, in order of incr, dec, adj dupl, dupl.
void runTest(int values[], int size) {
	cout << boolalpha
		<< isSortedIncreasing(values, size) << " "
		<< isSortedDecreasing(values, size) << " "
		<< hasAdjacentDuplicates(values, size) << " "
		<< hasDuplicates(values, size) << endl;
}

// Step 1 Hard Code test arrays 
void testHarness(void) {
	int t1[] = { 3, 3, 3 };
	int t2[] = { 7 };
	int t3[] = { 2, 1, 2 };
	int t4[] = { 1, 2, 3, 4, 5, 0 };
	int t5[] = { 5, 4, 3, 2, 1, 0 };
	int t6[] = { 1, 2, 3, 4, 5, 5 };

	runTest(t1, 3);
	runTest(t2, 1);
	runTest(t3, 3);
	runTest(t4, 5);
	runTest(t5, 5);
	runTest(t6, 5);
}

int main(void) {
	//
}















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

// Step 1 Tests: Hard-coded arrays
void testDisplayRun(void) {
	int t1[] = { 1, 2, 3 }; // no run
	int t2[] = { 2, 2 }; // whole array is run
	int t3[] = { 4, 4, 1 }; // run at start
	int t4[] = { 1, 5, 5 }; // run at end
	int t5[] = { 6, 6, 6, 3, 3 }; // two runs touching
	int t6[] = { 1, 2, 5, 5, 3, 1, 2, 4, 3, 2, 2, 2, 2, 3, 6, 5, 5, 6, 3, 1 }; // example trial

	displayRun(t1, 3); cout << "hasRun: " << boolalpha << hasRun(t1, 3) << endl;
	cout << "hasRun: " << hasRun(t2, 2) << endl;
	cout << "hasRun: " << 
}