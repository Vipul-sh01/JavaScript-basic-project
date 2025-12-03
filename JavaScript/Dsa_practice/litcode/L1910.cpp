// This Program for removing all occurrences of a substring from a string

#include<iostream>
#include<string>
using namespace std;

int main(){
    string n = "";
    cin>>n;
    string p = "";
    cin>>p;

    while(n.length()>0 && n.find(p) < n.length()){
        n.erase(n.find(p), p.length());
    }

    cout<<n<<endl;
}