#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < (sizeof(numArr) / sizeof(numArr[0])); i++) {
        if (numArr[i] % 2 == 0) {
            ofstream even("even.txt", ios::app);
            even << numArr[i] << endl;
            even.close();
        } else if (numArr[i] % 2 == 1) {
            ofstream unEven("uneven.txt", ios::app);
            unEven << numArr[i] << endl;
            unEven.close();
        }
    }
    return 0;
}