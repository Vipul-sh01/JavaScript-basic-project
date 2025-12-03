#include <iostream>
#include <vector>
using namespace std;

void pushZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int nonZeroIndex = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[nonZeroIndex++] = arr[i];
        }
    }

    while (nonZeroIndex < n) {
        arr[nonZeroIndex++] = 0;
    }
}

int main() {
    vector<int> arr = {12, 0, 45, 0, 35, 0};
    pushZerosToEnd(arr);

    cout << "Array after pushing zeros to the end: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}