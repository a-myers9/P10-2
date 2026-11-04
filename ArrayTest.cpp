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
		for (int j = i + 1; j < size; j++) {
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
	int t5[] = { 5, 4, 3, 2, 1, 9 };
	int t6[] = { 1, 2, 3, 4, 5, 5 };

	runTest(t1, 3);
	runTest(t2, 1);
	runTest(t3, 3);
	runTest(t4, 5);
	runTest(t5, 5);
	runTest(t6, 5);
}

//int main(void) {
	//testHarness();

	//return 0;
//}

int main(void) {
	//Step 2: read size integers with a loop, then report 
	const int N = 6;
	int data[N];
	for (int i = 0; i < N; i++) {
		cout << "Enter integer #" << i << ": ";
		cin >> data[i];
	}

	// Operator
	cout << "The data are " << (isSortedIncreasing(data, N) ? "" : "not ") << "increasing." << endl;
	cout << "The data are " << (isSortedDecreasing(data, N) ? "" : "not ") << "decreasing." << endl;
	cout << "The data " << (hasAdjacentDuplicates(data, N) ? "has" : "does not have") << " adjacent duplicates." << endl;
	cout << "The data " << (hasDuplicates(data, N) ? "has" : "does not have") << " duplicates." << endl;

	return 0;
}

