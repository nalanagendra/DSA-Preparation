#include<iostream>
using namespace std;

// monotonic search space

int binarySearch(int arr[], int size, int searchKey) {
  int start = 0;
  int end = size - 1;
  int mid;

  while (start <= end) {
    mid = (start + end) / 2;
    if (arr[mid] == searchKey) {
      return mid;
    } else if (arr[mid] > searchKey) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return -1;
}

int main() {
  int arr[] = {1, 3, 10, 12, 18, 34, 45, 58, 60};
  int size = sizeof(arr) / sizeof(int);
  int searchKey;

  cout << "Enter the Search Key : " << endl;
  cin >> searchKey;

  int index = binarySearch(arr, size, searchKey);

  if (index == -1) {
    cout << searchKey << " not found in array" << endl;
  } else {
    cout << searchKey << " found at index " << index << endl;
  }

  return 0;
}