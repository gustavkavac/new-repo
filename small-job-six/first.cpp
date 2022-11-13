#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string txt;
    string fileName;

    cout << "Ievadiet tekstu: ";
    getline(cin, txt);
    cout << "Ievadiet faila nosaukumu: ";
    getline(cin, fileName);

    ofstream outFile(fileName);
    outFile << txt;
    outFile.close();

    cout << "Teksts saglabats!" << endl;

    return 0;
}