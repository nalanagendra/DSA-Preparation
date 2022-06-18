#include<iostream>
using namespace std;

// two pointer method

int arrayReverse(int arr[], int size) {
  int start = 0;
  int end = size - 1;
  
  while (start < end) {
    swap (arr[start], arr[end]);
    start ++;
    end --;
  }
}

int main() {
  int arr[] = {120, 130, 150, 160, 180, 200, 1};
  int size = sizeof(arr)/sizeof(int);

  cout << "Before Reverse : " << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
  arrayReverse(arr, size);

  cout << "After reverse : " << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}