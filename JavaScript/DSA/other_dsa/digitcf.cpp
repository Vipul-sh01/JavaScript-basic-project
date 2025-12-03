#include <iostream>
using namespace std;

class Solution {
public:
    long long factorial(int N) {
        if (N == 0 || N == 1) {
            return 1;
        } else {
            long long fact = 1;
            for (int i = 2; i <= N; i++) {
                fact *= i;
            }
            return fact;
        }
    }

    int countDigits(long long num) {
        int count = 0;
        while (num != 0) {
            count++;
            num /= 10;
        }
        return count;
    }

    int digitsInFactorial(int N) {
        long long fact = factorial(N);
        return countDigits(fact);
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.digitsInFactorial(N) << endl;
    }
    return 0;
}
