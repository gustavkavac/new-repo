#include <iostream>
using namespace std;

int main() {
    char input[1024];
    char output[1024];
    int output_size = 0;
    cout << "Ierakstiet simbolu virkni: ";
    
    cin.getline(input, 1024);
    cout << '\n';
    for(int i = 0; i < 1024; i++) {
        if (isdigit(input[i]) == 0) {
            output[output_size] = input[i];
            output_size++;
        }
    }
    cout << output << endl;    
    return 0;
}