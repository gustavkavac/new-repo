#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void save(int &letter);

int main() {
    int counter = 0;
    
    save(counter);

    cout << counter << endl;

    return 0;
}

void save(int &letter) {
    char chr;
    ifstream obj("file4.txt");
    
    if (obj.is_open()) {
        cout << "atverts :))" << endl;
        while (true) {
            obj.get(chr);
            if (obj.eof()) {
                break;
            }   
            cout << chr << " ";
            if (isalpha(chr)) {
                letter++;
            }
        }
    }
    obj.close();    

}   
