#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void write(string &datetime);
int save(string datetime);
int read(string datetime);

int main(){

    bool running = true;
    string izveles = "1) Ievadit datumu un laiku\n2) Saglabāt binārajā failā\n3) Nolasīt un izdrukāt uz ekrāna\n4) Beigt programmu";

    string datums = "13.10.2021 16:49";

    while (running) {
        int izvele;

        cout << izveles << endl;
        cout << "Jusus izvele: ";
        cin >> izvele;
        cin.ignore(1);

        switch (izvele) {
            case 1:
                write(datums);
                break;
            case 2:
                save(datums);
                break;
            case 3:
                read(datums);
                break;
            case 4:
                running = false;
                break;
            default:
                cout << "Nepareiza izvele!" << endl;
                break;
        }
    }
    cout << "adios!" << endl;
    return 0;
}

void write(string &datetime) {
    cout << "Ievadiet datumu un laiku (dd.mm.yyyy hh:mm): ";

    getline(cin, datetime);
    cout << datetime << endl;
}

int save(string datetime) {
    ofstream ofs("binery_for_fifth.txt", ios::binary | ios::app);
    if (!ofs){
        cout << "Kluda rakstot faila" << endl;
        return -1;
    }
    ofs.write((char*)&datetime, sizeof(datetime));
    ofs.close();
    cout << "Saglabats faila" << endl;

    return 0;
}

int read(string datetime) {
    ifstream ifs("binery_for_fifth.txt", ios::in|ios::binary);
    if (!ifs){
        cout << "Kluda atverot faila" << endl;
        return -1;
    }
    while (ifs.eof() != 0) {
        ifs.read((char*)&datetime, sizeof(datetime));
    }
    cout << datetime << endl;
    return 0;
}