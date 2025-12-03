#include<iostream>
#include<string>
using namespace std;

bool isAlphanumeric(char data){
    if(data >= '0' && data <= '9' || (tolower(data) >= 'a') && (tolower(data) <= 'z')){
        return true;
    }
    return false;
}

bool Pollindrome(string data){
    int i = 0;
    int j = data.length()-1;

    while(i<j){
        if(!isAlphanumeric(data[i])){
            i++;
            continue;
        }

        if(!isAlphanumeric(data[j])){
            j--;
            continue;
        }

        if(data[i] != data[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
   string input = "vipul@123";
   int r = Pollindrome(input);
   if(r == true){
    cout<<"yes"<<endl;
   }
   else{
    cout<<"no"<<endl;
   }
}