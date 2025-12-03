#include<iostream>
using namespace std;

int fum(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        if (a[i]>a[i+1])
        {
            return false;
        }
      // naive solution  
    //   for (int j = i+1; i < n; j++)
    //   {
    //     if(a[j]<a[i]){  
    //         return false;
    //     }
    //   }
      
    }
    return true;
    
}

int main() {
    int arr[] = {1, 2, 6, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (fum(arr, n)) {
        cout << "The array is sorted in non-decreasing order." << endl;
    } else {
        cout << "The array is not sorted in non-decreasing order." << endl;
    }

    return 0;
}