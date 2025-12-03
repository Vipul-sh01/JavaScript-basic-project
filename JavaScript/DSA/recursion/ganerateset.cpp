#include<iostream>
using namespace std;

class ganeratePowerSet{
    public:
    void fun(string str, int i = 0, string curr = ""){
        int n = str.length();
        if(i==n){
            cout<<curr<<endl;
            return;
        }
        fun(str, i+1, curr+str[i]);
        fun(str, i+1, curr);
    }
};

int main(){
    string s = "abc";
    ganeratePowerSet boj;
    boj.fun(s);
}