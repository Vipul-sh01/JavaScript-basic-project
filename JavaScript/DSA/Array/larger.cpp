#include<iostream>
#include<vector>
using namespace std;


class Array{
    public:
    vector<int> userArray;
    int fun(int n){
        for(int i = 0; i<=n-1;i++){
           int value;
           cin>> value;
           userArray.push_back(value);
        }
    }

    int largerElement(){
        if(userArray.empty()){
            return -1;
        }
        int maxElement  = userArray[0];
        for(int i = 0 ; i<userArray.size(); i++){
           if(userArray[i]> maxElement){
              maxElement = userArray[i];
           }
        }
        return maxElement;
    }

    void printArray(){
        for(int i = 0; i<userArray.size(); i++){
            cout<< userArray[i]<<" ";
        }
    }
};
int main(){ 
    int a;
    cin>> a;
    Array obj;
    obj.fun(a);
    obj.printArray();
    int largest = obj.largerElement();
    if(largest != -1){
        cout << "The largest element in the array is: " << largest << endl;
    } else {
        cout << "The array is empty." << endl;
    }
}