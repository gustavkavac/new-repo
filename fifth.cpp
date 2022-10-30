#include <iostream>
#include <string>
using namespace std;

int main(){ 
    string txt;
    cout << "Ievadiet simbolu virkni: ";
    cin >> txt;
    cout << '\n';
    int n = txt.size();
    while(n >= 0){
        cout << txt[n--] << " ";
    }
    cout << '\n';
    return 0;
}