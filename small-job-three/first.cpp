#include <iostream>
using namespace std;

int main(){
    int *point_num;
    int input;

    point_num = &input;

    cout << *point_num;
    return 0;
}