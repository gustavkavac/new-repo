#include <iostream>
using namespace std;

int main() {
    int a[5][5] = { {9,8,3,2,4} , {3,4,1,3,4} , {9,2,4,1,3} , {6,6,4,2,5} , {2,5,6,8,3} };

    cout << "Original Matrix: \n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}