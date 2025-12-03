#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
   
    if(n<0){
        cout << "No" << endl;
        return 0;
    }
    string s = to_string(n);
    int i = 0;
    int j = s.size()-1;

    while(i<j){
        if(s[i] != s[j]){
            cout << "No" << endl;
            return 0;
        }
        i++;
        j--;
    }
    cout<<"yes"<<endl;
}