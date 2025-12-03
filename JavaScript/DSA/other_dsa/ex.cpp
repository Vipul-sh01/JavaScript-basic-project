#include <iostream>
using namespace std;

int fun(int arr[], int n) {
    int x = arr[0];
    for (int i = 1; i < n; i++) {
       x = x ^ arr[i];
    }
    return x;
}

int main() {
    int arr[] = {9,12,2,11,2,2,10,9,12,10,9,11,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "XOR of all elements in the array: " << fun(arr, n) << endl;
    
    return 0;
}
