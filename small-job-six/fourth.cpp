#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void save(vector<char> &data, char input);
void out(vector<char> data);

int main() {
    vector<char> first;
    char user_input;

    cout << "Kuru burtu iznjemt? : ";
    cin >> user_input;

    save(first, user_input);
    out(first);

    return 0;
}

void save(vector<char> &data, char input) {
    char chr;
    ifstream obj("file4.txt");
    
    if (obj.is_open()) {
        while (true) {
            obj.get(chr);
            if (obj.eof()) {
                break;
            }   
            if (chr == input) {
            } else if (chr != input) {
                data.push_back(chr);
            }
        }
    }
    obj.close();    

}   

void out(vector<char> data) {
    ofstream out("file5.txt", ios::trunc);
    for (int i = 0; i < data.size(); i++) {
        out << data[i];
    }
    out.close();
}