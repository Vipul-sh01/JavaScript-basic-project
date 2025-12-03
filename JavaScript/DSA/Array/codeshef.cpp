#include<bits/stdc++.h>
#include<vector>
using namespace std;

class searc{
    public:
        vector<int>userArr;
    int fun(int n){
        for(int i=0;i<n;i++){
            int value;
            cin>>value;
            userArr.push_back(value);
        }
        cout<<endl;
    }
     int linearSearch(int target) {
        for(int i = 0; i < userArr.size(); i++) {
            if(userArr[i] == target) {
                cout << "Found element: " << userArr[i] << endl;
                return i; 
            }
        }
        return -1;  
    }
    void printArray() {
        for(int i = 0; i <= userArr.size()-1; i++) {
            cout << userArr[i] << " ";
        }
        cout << endl;
    }
};
int main(){
    int a;
    cin>>a;
    int x;
    searc obj;
    obj.fun(a);
    obj.printArray();
    cout << "Enter the target to target: ";
    cin>>x;
    int result = obj.linearSearch(x);
    if(result != -1){
        cout<<"Yes ";
    }
    else{
        cout<<"No";
    }
    
}