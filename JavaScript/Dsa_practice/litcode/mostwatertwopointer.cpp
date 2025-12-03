#include<iostream>
using namespace std;

int main(){
    int a[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(a)/sizeof(a[0]);

    int lp = 0;
    int rp = n-1;
    int mw = 0;

    while(lp<rp){
        int area = min(a[lp],a[rp])*rp-lp;
        mw = max(area, mw);
        (a[lp]<a[rp])?lp++:rp--;
    }
    cout<<mw;
}