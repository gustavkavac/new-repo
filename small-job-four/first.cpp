#include <iostream>
using namespace std;

void sum(int x, int y);

int main(){
    int a = 0;
    int b = 0;
    int *num_1;
    int *num_2;

    cout << "ievadiet skaititajus:" << endl;
    cin >> a;
    *num_1 = a;

    cin >> b;
    *num_2 = b;
    cin.clear();
    cin.ignore(1000, '\n');

    sum(*num_1, *num_2);

    // int ab = *num_1 + *num_2;
    // cout << ab;

    return 0;
}

void sum(int x, int y){
    int sum = 0;
    sum = x + y;

    cout << "skaitlju summa ir : " << sum << endl;
}
