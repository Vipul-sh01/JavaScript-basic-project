#include<iostream>
#include<vector>
using namespace std;

class array{
    public:
    vector<int> userArray;
    int fun(int n){
        int i;
        for(i = 0; i<=n-1; i++){
            int value;
            cin>> value;
            userArray.push_back(value);
        }
    }
    int linearSearch(int target){
        for(int i = 0; i < userArray.size(); i++){
            if(userArray[i] == target){
                return i;
            }
        }
        return -1; 
    }
    void printArray(){
        for(int i = 0; i<userArray.size(); i++){
            cout<< userArray[i]<<" ";
        }
    }
};

int main(){
    int a;
    cin>>a;
    array obj;
    obj.fun(a);
    obj.printArray();
    int value;
    cin>> value;
    int result = obj.linearSearch(value);
    if(result!=-1){
        cout<< "Number at the position on"<<result;
    }
    else{
        cout<< "not found!";
    }
}