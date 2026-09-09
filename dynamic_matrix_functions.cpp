#include <iostream>
#include <vector>
using namespace std;

void vivod_matrix(int **a, int rows, int cols) {
 for (int i = 0;i < rows;i++) {
  for (int j = 0;j < cols;j++) {
   cout << a[i][j] << " ";
  }
  cout << endl;
 }
}

void free_matrix(int **a, int rows) {
 for (int i = 0;i < rows;i++) {
  delete[] a[i];
 }
 delete[] a;
}
int main() {
 int rows, cols;
 cin >> rows >> cols;
 int** a = new int* [rows];
 for (int i = 0;i < rows;i++) {
  a[i] = new int[cols];
 }
 for (int i = 0;i < rows;i++) {
  for (int j = 0;j < cols;j++) {
   cin >> a[i][j];
  }
 }
 vivod_matrix(a, rows, cols);
 free_matrix(a, rows);
}
