#include <bits/stdc++.h>
using namespace std;


void generatePowerSet(string s, int index, string current, vector<string>& result) {
    if (index == s.length()) {
        result.push_back(current);
        return;
    }
    generatePowerSet(s, index + 1, current + s[index], result);
    generatePowerSet(s, index + 1, current, result);
}

vector<string> powerSet(string s) {
    vector<string> result;
    generatePowerSet(s, 0, "", result); 
    return result;
}

int main() {
    int T;
    cin >> T; 
    while (T--) {
        string s;
        cin >> s; 
        vector<string> ans = powerSet(s);
        sort(ans.begin(), ans.end());
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
