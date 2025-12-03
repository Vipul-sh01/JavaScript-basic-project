#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

int main(){
    int arr[] = {2,7,11,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target;
    cin>>target;

    unordered_map<int, int >map;
    vector<int>sum;

    for(int i = 0; i<n; i++){
        int first = arr[i];
        int second = target - first;
        if(map.find(second) != map.end()){
            sum.push_back(i);
            sum.push_back(map[second]);
            break;
        }
        map[first] = i;
    }
   if (!sum.empty()) {
        cout << "Indices: ";
        for (int index : sum) {
            cout << index << " ";
        }
    } else {
        cout << "No two sum solution found";
    }

    return 0;
}