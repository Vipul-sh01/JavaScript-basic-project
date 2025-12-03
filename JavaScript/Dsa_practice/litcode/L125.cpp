#include<iostream>
#include <cctype> 
#include <string>
using namespace std;

int main(){
    string s = " ";
    cin>>s;


    string n = "";
    // Step 1: Filter the string to keep only alphanumeric characters and convert to lowercase
    for(size_t i = 0; i<s.size(); i++){
        if(isalnum(s[i])){
            n = n + static_cast<char>(tolower(s[i]));
        }
    }
    
    cout << "Filtered string: " << n << endl;

    // Step 2: Check if the filtered string is a palindrome
    int i = 0;
    int j = n.size()-1;
    bool pollindrome = true;

    while(i<j){
        if(n[i] != n[j]){
            pollindrome = false;
            break;
        }
        i++;
        j--;
    }

    if(pollindrome){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}