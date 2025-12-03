#include<iostream>
using namespace std;

int main(){
    int a[] = {1,3,4,2,2};
    int n = sizeof(a)/sizeof(a[0]);

    int slow = a[0];
    int fast = a[0];

    do {
        slow = a[slow];
        fast = a[a[fast]];
    } while (slow != fast); // Phase 1: find meeting point

    slow = a[0];
    while (slow != fast) { // Phase 2: find cycle start
        slow = a[slow]; 
        fast = a[fast]; 
    }

    cout << "Duplicate number is: " << slow << endl;
}
