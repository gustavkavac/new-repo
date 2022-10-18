#include <iostream>
using namespace std;

int main() {
    char input[1024];
    cout << "Ierakstiet dazhadus burtus: ";
    cin.getline(input, 1024);
    int a_counter = 0;
        for(int i = 0; i < 1024; i++) {
            if (input[i] == 'a') {
                a_counter++;
            }
        }
    cout << "Jusu virkne bija " << a_counter << " burti 'a'." << endl;
   return 0;
}
