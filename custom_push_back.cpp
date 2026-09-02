#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void custom_push_back(int*& arr, int& size, int& new_element) {
	int* new_arr = new int[size+1];
	for (int i = 0;i < size;i++) {
		new_arr[i] = arr[i];
	}
	new_arr[size] = new_element;
	delete[] arr;
	arr = new_arr;
	size++;
}
void vivod(const int* arr, int& size) {
	cout << "NEW ARRAY:" << endl;
	for (int i = 0;i < size;i++) {
		cout << i + 1 << "." << arr[i] << endl;
	}
}
int main() {
	int* arr = new int[3];
	int size = 3;
	int new_element = 80;
	for (int i = 0;i < size;i++) {
		arr[i] = 50;
	}
	custom_push_back(arr, size, new_element);
	vivod(arr, size);
	delete[] arr;
}
