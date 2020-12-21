#include <iostream>

using namespace std;

int findMinIndex(int* arr, int len, int startIndex) {
	int minIndex = startIndex;

	for (int i = startIndex + 1; i < len; i++) {
		if (arr[i] < arr[minIndex]) {
			minIndex = i;
		}
	}

	return minIndex;
}

void printArray(int* arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void selectionSort(int* arr, int len) {
	for (int i = 0; i < len-1; i++) {
		int current = arr[i];
		int minIndex = findMinIndex(arr, len, i);

		if (i != minIndex && current > arr[minIndex]) {
			cout << "Swap " << arr[i] << " <=> " << arr[minIndex] << endl;
			swap(arr[i], arr[minIndex]);
			printArray(arr, len);
			cout << endl;
		}
	}
}

int main() {
	int arr[] = { 3,9,1,7,5,6,0,8,4,2 };
	int arrLen = sizeof(arr) / sizeof(int);

	cout << "BEFORE:" << endl;
	printArray(arr, arrLen);
	cout << endl;

	selectionSort(arr, arrLen);

	cout << "AFTER:" << endl;
	printArray(arr, arrLen);

	return 0;
}