#include <iostream>
using namespace std;

int main(){
    int *pnt_first;
    int *pnt_second;
    int *pnt_sum;

    pnt_first = new int;
    pnt_second = new int;

    cout << "Ievadiet skaitijaus:" << endl;
    cin >> *pnt_first;
    cin.ignore(1000, '\n');
    cin.clear();
    cin >> *pnt_second;
    cin.ignore(1000, '\n');
    cin.clear();
    
    pnt_sum = new int;
    *pnt_sum = *pnt_first + *pnt_second;

    cout << "Summa ir " << *pnt_sum << endl;

    return 0;
}
