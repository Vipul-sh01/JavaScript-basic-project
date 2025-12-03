#include<iostream>
#include<vector>
#include <unordered_set>
using namespace std;


class Duplicate {
public:
    int fun(vector<int>& a) {
        unordered_set<int> seen;
        for (int num : a) {
            if (seen.find(num) != seen.end()) {
                return num;  
            }
            seen.insert(num);
        }
        return -1;  
    }
};
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n;i++){
        cin>>a[i];
    }
    Duplicate obj;
    cout<<obj.fun(a);  
    
}