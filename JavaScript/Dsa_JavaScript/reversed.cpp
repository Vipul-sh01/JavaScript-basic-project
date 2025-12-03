#include<iostream>
#include<string>
using namespace std;

int main(){
    string a = "nitin";
    int i = 0;
    int j = a.length()-1;
    bool isPolidrome = true;

    while(i < j){
        if(a[i] != a[j]){
            isPolidrome = false;
            break;
        }
        i++;
        j--;
    }
    if (isPolidrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}