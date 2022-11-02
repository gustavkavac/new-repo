#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    string *point_num;

    point_num = &input;
    cin >> input;

    cout << *point_num;




    return 0;
}