#include<iostream>
#include<vector>
using namespace std;

class Array{
    public:
    vector<int> userArray;

    void inputArray(int n){
        for(int i = 0; i < n; i++){
            int value;
            cin >> value;
            userArray.push_back(value);
        }
    }

    void bubbleSort(){
        int n = userArray.size();
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(userArray[j] > userArray[j+1]){
                    int temp = userArray[j];
                    userArray[j] = userArray[j+1];
                    userArray[j+1] = temp;
                }
            }
        }
    }

    void printArray(){
        for(int i = 0; i < userArray.size(); i++){
            cout << userArray[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    Array obj;
    obj.inputArray(n);

    cout << "Array before sorting: ";
    obj.printArray();

    obj.bubbleSort();

    cout << "Array after sorting: ";
    obj.printArray();

    return 0;
}
