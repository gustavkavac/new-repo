#include <iostream>
using namespace std;

int main(){
    int num_mass[10] = {4, 2, 8, 3, 5, 6, 7, 9, 11, 15};
    int *pointNum;
    int *input;
    bool itis = false;
    int *i;

    input = new int;
    i = new int;
    *i = 0;

    cout << "Ievadiet skailti, lai parbauditu vai tas ir skaitlju rindaa: ";
    cin >> *input;
    cin.ignore(1000,'\n');
    cin.clear();

    while(itis == false){
        if(*input == num_mass[*i]){
            itis = true;
            break;
        } else if(*i == 10){
            break;
        } else {
            *i = *i + 1;
        }
    }
    
    if(itis){
        cout << '\n' << "Tas ir skaitljus rinda" << endl;
    } else {
        cout << '\n' << "Tas nav skaitlju rinda " << endl;
    }
}