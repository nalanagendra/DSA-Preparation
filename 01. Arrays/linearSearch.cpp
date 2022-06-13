#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int searchNum) {
  for (int i = 0; i < size; i++) {
    if (searchNum == arr[i]) {
      return i;
    }
  }

  return -1;
} 

int main() {
  int arr[] = {1, 10, 23, 12, 3, 5, 6, 7};

  int size = sizeof(arr)/sizeof(int);
  int searchNum;

  cout << "Enter search Number : " << endl;
  cin >> searchNum;

  int searchIndex = linearSearch(arr, size, searchNum); 

  searchIndex >= 0 ? cout << "Found! at index : " << searchIndex << endl : cout << "Not found!" << endl;

  return 0;
}