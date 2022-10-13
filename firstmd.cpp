#include <iostream>
#include <string>

using namespace std;

int main() {
  bool stp = false;
  string txt = "Programmas ir jaraksta cilvekiem, kas tas lasis!";

  cout << "Dota virkne: " << txt << endl;
  cout << "Izvelaties ko darit ar virkni\n";
  cout << "1: Ievadīt jaunu tekstu (parastie burti)" << endl;
  cout << "2: Pasaka vai ievadītā teksta garums ir pāra vai nepāra skaitlis" << endl;
  cout << "3. Izvada summu no 1..n (kur n = teksta garums" << endl;
  cout << "4. Atrod faktoriāli n (kur n = teksta garums)" << endl;
  cout << "5. Izvada virkni no otrā gala (reversā)" << endl;
  cout << "6. Beigt darbību" << endl;
  cout << "Izvelieties ievadot cip 1-6\n";

  while(!stp) {
    int counter = 0;
    int a = txt.size();  
    cin >> counter;
    cin.clear();
    cin.ignore(10000,'\n');

    switch(counter){

      case 1: {         
        cout << "Ivadiet jaunu tekstu:";
        getline(cin, txt);
        cout << "Jaunais teksts ir:" << txt << endl;
        break;
      }

      case 2: {         
        if (a % 2 == 0) {
            cout << "teksta garums ir para skaitlis" << endl;
        } else {
            cout << "teksta garums ir nepara skaitlis" << endl;
        }
        break;
      }

      case 3:
        cout << "Teksta garums ir " << a << " rakstzimes." << endl;
        break;

      case 4: {         
        long long fcto = 1;
        for(long i = 1; i <= a; ++i) {
            fcto *= i;
        }
        cout << "Faktorials no teksta garuma: " << fcto << endl;
        break;
      }

      case 5:{         
        int b = a-1;
        cout << "Teksts reversaa:" << endl;
          while (0 <= b) {
            cout << txt[b];
            b--;
          }
        cout << endl;    
        break;
      }
      
      case 6:{
        cout << "Paldies, uz atkal tikshanos" << endl;
        stp = true;
        break;
      }

      default:{
        cout << "Nepareizi ievadits operators." << endl;
        break;
      }
    }
  }

  return 0;
}