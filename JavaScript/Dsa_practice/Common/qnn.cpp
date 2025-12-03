#include<iostream>
#include<unordered_map>
#include<map>
using namespace std;

int main(){
    unordered_map<char, int>roman = {
        {'v', 1},
        {'i', 2},
        {'p', 3},
        {'u', 4},
        {'l', 5},
    };
        if(roman.find('p') != roman.end()){
            cout<<roman['p'];
        }
        else{
            cout<<" No ";
        }
}