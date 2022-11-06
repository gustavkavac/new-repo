#include <iostream> 
using namespace std;

void print_reverse(int narr[10], int size){
    for(int *i = &narr[10]; *i < size; i++){
        cout << *i << ' ';
    }
}

int main(){
    int num_arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int b = sizeof(num_arr)/sizeof(int);
    cout << b;
    print_reverse(num_arr, b);
    cout << endl;
}