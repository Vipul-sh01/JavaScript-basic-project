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

    void insertionSort(){
        int n = userArray.size();
        for(int i = 1; i < n; i++){
            int key = userArray[i];
            int j = i - 1;
            while(j >= 0 && userArray[j] > key){
                userArray[j + 1] = userArray[j];
                j = j - 1;
            }
            userArray[j + 1] = key;
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

    obj.insertionSort();

    cout << "Array after sorting: ";
    obj.printArray();

    return 0;
}
