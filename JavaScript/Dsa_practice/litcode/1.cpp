#include<iostream>
using namespace std;

int main(){
    int a[] = {1, 3, 2, 4, 2, 3, 2, 4};
    int n = sizeof(a) / sizeof(a[0]);

    for(int i = 0; i < n; i++) {
        int c = 0;
        for(int j = 0; j < n; j++) {
            if(a[j] == a[i]) {
                c++;
            }
        }
        if(c > n / 2) {
            cout << "Majority element: " << a[i] << endl;
            break;  
        }
    }
    
    return 0;
}
