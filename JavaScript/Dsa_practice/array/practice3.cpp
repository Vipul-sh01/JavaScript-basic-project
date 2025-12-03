#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int triangleNumber(vector<int>& nums) {
    int n = nums.size();
    if (n < 3) return 0; 
    sort(nums.begin(), nums.end());
    int count = 0;

    for (int c = n - 1; c >= 2; c--) {
        int a = 0, b = c - 1;
        while (a < b) {
            if (nums[a] + nums[b] > nums[c]) {
                count += (b - a);
                b--; 
            } else {
                a++; 
            }
        }
    }
    return count;
}

int main() {
    vector<int> nums = {7,3, 6, 4};
    cout << "Number of valid triangles: " << triangleNumber(nums) << endl;
    return 0;
}
