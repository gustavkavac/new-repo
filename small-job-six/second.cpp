#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int x);

int main() {
    int numArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < (sizeof(numArr) / sizeof(numArr[0])); i++) {
        if ((numArr[i] % 2 == 1) && (isPrime(numArr[i]) == 0)) {
            ofstream even("file2.txt", ios::app);
            even << numArr[i] << endl;
            even.close();
        } else if ((numArr[i] % 2 == 0) && (isPrime(numArr[i]) == 0)) {
            ofstream unEven("file1.txt", ios::app);
            unEven << numArr[i] << endl;
            unEven.close();
        } else if (isPrime(numArr[i])) {
            ofstream prime("file3.txt", ios::app);
            prime << numArr[i] << endl;
            prime.close();           
        }
    }
    return 0;
}

bool isPrime(int x) {
    bool isPrime = true;

    if (x == 0 || x == 1) {
        isPrime = false;
    }

    for (int i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            isPrime = false;
        }
    }

    return isPrime;
}