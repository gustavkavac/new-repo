#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <iterator>
using namespace std;

void info();
void Print(int);
void Print(vector<int>);
void Print(stack<int>&);
void Print(list<int>&);
void VectInpt(vector<int>&);
void VectToStack(vector<int>, stack<int>&);
void VectToList(vector<int>, list<int>&);
void StackToStack(stack<int>&, stack<int>&);
int switcher();

int main(){
    vector<int> num = {4, 5, 6, 7, 8};
    list<int> num1;
    stack<int> num2;
    stack<int> num3;
    bool stp = false;
    
    enum inputCall {change_numbers = 1, task_two, task_three, task_four, print_vector, end};
    
    info();

    while (!stp){   //loops ar ieksheju zaroshanos, kura tiek lietots enums
        switch(inputCall(switcher())){  //visos keisos ir principā tikai funkcijas
            case change_numbers:{
                VectInpt(num);
                break;
            }
            case task_two:{
                VectToList(num, num1);
                Print(num1);
                break;
            }
            case task_three:{
                cout << "Printē caur steku: ";
                VectToStack(num, num2);
                Print(num2);
                break;
            }
            case task_four:{
                VectToStack(num, num2);
                StackToStack(num2, num3);
                Print(num3);
                break;
            }
            case print_vector:{
                Print(num);
                break;
            }
            case end:{
                cout << "end" << endl;
                stp = true;
                break;
            }
            default:{
                cout << "Nepareizi ievadīta izvēlne!" << endl;
                break;
            }
        }
    }
    return 0;
}

void info(){    // informatīvā izdruka
    cout << "Izvelne:" << endl;
    vector<string> info = {"Ievadīt skaitļus", "Rinda", "Steks", "Divi steki", "Izvada skaitļu virkni", "Beigt darbību"};
    for (int i = 0; i < 6; i++) {
        cout << i + 1 << ". " << info[i] << endl;
    }
}

void Print(int arg){    //visu objektu izdruka pēc kārtas
    cout << arg << "\n";
}

void Print(vector<int> arg){
    cout << "Printe no vektora: ";
    for (int i = 0; i < arg.size(); i++){
        cout << arg[i] << " ";
    }
    cout << '\n';
}

void Print(stack<int>& arg){
    while (!arg.empty()){
        cout << arg.top() << " ";
        arg.pop();
    }
    cout << '\n';
}

void Print(list<int>& arg){
    cout << "Printē no rindas: ";
    list<int>::iterator it;
    for (it = arg.begin(); it != arg.end(); it++){
        cout << *it << " ";
    }
    while(!arg.empty()){
        arg.pop_back();
    }
    cout << '\n';
}    

void VectInpt(vector<int>& num){    // objektu pamainīšanas funkcijas
    bool stp = false;
    int i = 0;
    cout << "Vecie skaitļi: ";
    Print(num);
    num.clear();
    cout << "Sintaxe:1 2 3 924973 164723 x" << '\n' << "Jaunie skaitļi: ";
    while (cin >> i){
        num.push_back(i);
        if (i == 'x') break;
    }
    cin.clear();
    cin.ignore(1000, '\n');

    if(num.empty()){
        cout << '\n' << "Nesanāca bez kļūdām ievadīt skaitļus!" << endl;
    }
}

void VectToStack(vector<int> vect, stack<int>& arg){
    for(auto x: vect){
        arg.push(x);
    }
}

void VectToList(vector<int> vect, list<int>& arg){
    for (auto x: vect){
        arg.push_back(x); 
    }
}

void StackToStack(stack<int>& stack_in, stack<int>& stack_out){
    cout << "Printē ar dubult staku: ";
    while (!stack_in.empty()){
        stack_out.push(stack_in.top());
        stack_in.pop();
    }
}

int switcher(){     // maza funkcija lai iedotu zaroshanās pieeju lietotājam
    int x = 7;
    cout << "Izvelēties darbību (ierakstiet skaitli no 1 lidz 6) : ";
    cin >> x;
    cin.clear();
    cin.ignore(1000, '\n');
    if ( x >= 7 ){
        x = 7;
    }
    return x;
}