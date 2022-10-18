#include <iostream>

using namespace std;

int main() {
    int num[10] = {7,1,90,3,4,5,9,9,10,11};
    int sum = 0;
    int avrge = 0;

    for (int i = 1; i <= 10; i++) {
        if (i == 10) {
            cout << sum/i << endl;
        } else {
            sum += num[i];
        }
    }
    return 0;
}