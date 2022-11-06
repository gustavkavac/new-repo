#include <iostream>
#include <string>
using namespace std;

int sizer(string input);

int main(){
    string txt;
    
    cout << "Ievadie simboolu rindu: ";
    getline(cin,txt);
    sizer(txt);

    return 0;
}

int sizer(string input){
    string *point_num;
    point_num = &input;
    int the_size = 0;
    cout << "Simbolu rindas garums ir : " << static_cast<string>(*point_num).size() << endl;
    return the_size;
}