#include <iostream>

// Pobierz od uzytkownika wiek. W zaleznosci czy
// jest pelnoletni wydrukuj odpowiedni tekst.

using namespace std;

int main()
{
    int wiek;
    cout << "Witaj! Podaj swoj wiek." <<endl;
    cin >> wiek;
    if (wiek<18){
        cout << "Jestes niepelnoletni. You shall not pass."<<endl;
    }
    else{
        cout << "Jestes pelnoletni."<<endl;
    }

    return 0;
}
