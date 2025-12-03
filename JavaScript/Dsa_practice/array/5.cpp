#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class RDuplicates {
public:
    void removeDuplicates(vector<int>& a) {
        unordered_set<int> seen;
        int j = 0; 
        for (int i = 0; i < a.size(); i++) {
            if (seen.find(a[i]) == seen.end()) { 
                seen.insert(a[i]);
                a[j++] = a[i];
            }
        }
        a.resize(j); 
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    RDuplicates obj;
    obj.removeDuplicates(a);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
