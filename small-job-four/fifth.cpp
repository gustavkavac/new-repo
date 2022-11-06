#include <iostream>
#include <array>
using namespace std;

int* minElement(int* arr, int arrSize);

int main(){
    // int masive[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int masive = 5;
    int *pointer;
    int *pointNum;

    pointNum = &masive;

    cout << *pointNum << endl;

    pointer = minElement(pointNum, 10);

    cout << *pointer << endl;
    return 0;
}

int* minElement(int* arr, int arrSize){
    
return arr;
}
