#include<iostream>
#include<climits>
using namespace std;


int main(){
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(arr)/sizeof(arr[0]);

    int lp = 0;
    int rp = n-1;
    int mw = INT_MIN;

    while(lp<rp){
        int w = rp-lp;
        int ht = min(arr[lp], arr[rp]);
        int area = w*ht;
        mw = max(area, mw);
        (arr[lp]<arr[rp])?lp++:rp--;
    }
    cout<<mw;
}

// int main(){
//     int arr[] = {1,8,6,2,5,4,8,3,7};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int mw = INT_MIN;
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             int w = j-i;
//             int h = min(arr[i], arr[j]);
//             int area = w*h;
//             mw = max(area, mw);
//         }
//     }
//     cout<<mw;
// }