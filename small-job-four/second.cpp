#include <iostream>
using namespace std;

int main(){
    int num_mass[10] = {4, 2, 8, 3, 5, 6, 7, 9, 11, 15};
    int *pointNum;
    int input;
    bool itis = false;
    int i = 0;

    cout << "Ievadiet skailti, lai parbauditu vai tas ir skaitlju rindaa: ";
    cin >> input;
    pointNum = &input; 

    for(i = 0; i < 10; i++){
        if(*pointNum == num_mass[i]){
            itis = true;
            break;
        }
    }
    
    if(itis){
        cout << '\n' << "Tas ir skaitljus rinda" << endl;
    } else {
        cout << '\n' << "Tas nav skaitlju rinda " << endl;
    }
}