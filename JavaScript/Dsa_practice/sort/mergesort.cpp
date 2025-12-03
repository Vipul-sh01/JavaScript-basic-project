#include<iostream>
#include<vector>
using namespace std;

class merg{
    public:
    void merge(vector<int>&a, int s, int mid, int e){
        int n1 = mid - s+1;
        int n2 = e-mid;

        vector<int>l1(n1), l2(n2);
        for(int i = 0; i<n1; i++){
            l1[i] = a[s+i];
        }
        for(int i = 0; i<n2; i++){
            l2[i] = a[mid+1+i];
        }
        int i = 0;
        int j = 0;
        int k = s;
        while(i<n1&&j<n2){
            if(l1[i]<=l2[j]){
                a[k] = l1[i];
                i++;
            }
            else{
                a[k] = l2[j];
                j++;
            }
            k++;
        }
        while(i<n1){
            a[k] = l1[i];
            i++;
            k++;
        }
        while(j<n2){
            a[k] = l2[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>&a, int s, int e){
        if(s<e){
            int mid = s+(e-s)/2;
            mergeSort(a, s, mid);
            mergeSort(a, mid+1, e);
            merge(a, s, mid, e);
        }
    }
};

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    merg obj;
    obj.mergeSort(a, 0, n-1);
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}