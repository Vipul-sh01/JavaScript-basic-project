#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n > 1 && n % 2 != 0){
        int height = n + 2;
        int width = n + 2;
        int mid = height / 2;

        for(int i = 0; i < height; i++){
            for(int j = 0; j < width; j++){
                // Top horizontal line
                if(i == 0){
                    cout << "* ";
                }
                // Middle line with 'e' and right-end '*'
                else if(i == mid){
                    if(j == 0)
                        cout << "e ";
                    else if(j == n)
                        cout << "* ";
                    else
                        cout << "  ";
                }
                // Bottom horizontal line (starts after vertical bar)
                else if(i == height - 1 && j > 0){
                    cout << "* ";
                }
                // Left vertical line
                else if(j == 0){
                    cout << "* ";
                }
                else{
                    cout << "  ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "Please enter an odd number greater than 1." << endl;
    }

    return 0;
}
