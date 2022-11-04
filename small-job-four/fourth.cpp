#include <iostream> 
#include <array>
using namespace std;

void print_reverse(array<int, 10> input);

int main(){
    array<int, 10> nmbr{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    print_reverse(nmbr);

}

void print_reverse(array<int, 10> input){
    int *pointNum;
    for(int i = 9; i > -1; --i){
    pointNum = &input[i];
    cout << *pointNum << ' ';
    }
}