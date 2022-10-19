#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Ierakstiet dazhadus burtus: ";
    getline(cin, input);

    int a_counter = 0;
        for(int i = 0; i < input.size(); i++) {
            if (input[i] == 'a') {
                a_counter++;
            }
        }
    cout << "Jusu virkne bija " << a_counter << " burti 'a'." << endl;
    return 0;
}