#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba, strzal, proba = 0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe z zakresu od 1 do 100" << endl;

    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal != liczba){

        proba++;

        cout << "Zgadnij jaka ( " << proba << " proba ) : ";
        cin >> strzal;

        if(strzal == liczba){
            cout << "Udalo sie ! Wygrywasz przy " << proba << " probie! " << endl;
            cout << "" << endl;
        }
        else if(strzal < liczba){
            cout << "To za malo!" << endl;
            cout << "" << endl;
        }
        else if(strzal > liczba){
            cout << "To za duzo!" << endl;
            cout << "" << endl;
        }
    }

    system("pause");
    return 0;
}
