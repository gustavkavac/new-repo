#include <iostream>
#include <array>

using namespace std;

int main() {
    array<long long int, 10> num = {7, 1, -9208, 549000, 9097, 5, 29145279, 9, 10, 11};
    long long int sum = 0;
    long long int avrge = 0;

    for (int i = 1; i <= 10; i++) {
        if (i == 10) {
            cout << sum/i << endl;
        } else {
            sum += num[i];
        }
    }
    return 0;
}