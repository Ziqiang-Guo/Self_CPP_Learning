#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i=0; i < n-1; i++){
        for (int j=0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int unsorted_arr[] = {0, 64, 34, 25, 12, 22, 8, 11, 90};
    int n = sizeof(unsorted_arr)/sizeof(unsorted_arr[0]);
    bubbleSort(unsorted_arr, n);
    cout << "Sorted array: \n";
    for (int i=0; i < n; i++){
        cout << unsorted_arr[i] << " ";
    }
    cout << endl;

    cout << "the actual size of this array is:" << sizeof(unsorted_arr) << endl;
    cout << "the actual size of one cell of this array is:" << sizeof(unsorted_arr[0]) << endl;

    return 0;
}   