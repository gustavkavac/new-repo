#include <iostream>

using namespace std;

int main() {
    float num[10] = {-110.4324 , -1 , -90 , -112.3453 , 1478 , -5 , -9 , -9 , -10 , 123456git};
    float num_max = num[0];
    
    for (int i = 1; i < 10; ++i) {
        auto new_num = num[i];

        if (new_num > num_max) {
            num_max = new_num;
        }
    }
    
    cout << num_max << endl;
    return 0;
}