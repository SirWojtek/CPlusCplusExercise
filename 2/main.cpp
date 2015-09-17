#include <iostream>

using namespace std;


// maluj trojkat
void trojkat(int wysokosc)
{
    // przykladowa petla for
    for (int i = 0; i < wysokosc; i++)
    {
        // bla
    }
}

// maluj prostokat
void prostokat(int bok1, int bok2)
{

    for (int i = 0; i < bok1; i++)
    {
        for (int i = 0; i<bok2;i++)
        {
            cout <<"#";
        }
       cout <<endl;
    }

}



int main()
{
     int wielobok;
    cout << "Witaj! Co chcesz narysowac? 1-prostokat, 2-trojkat" <<endl;
    cin >> wielobok;

    switch(wielobok)
    {
        case 1:
        // instrukcja prostokata
        int bok1;
        int bok2;
        cout << "Wybierz długosc prostokata" << endl;
        cin >> bok1;
        cout << "Wybierz szerokosc prostokata" << endl;
        cin >> bok2;
        prostokat(bok1,bok2);
        break; // wyjscie ze switcha

        case 2:
        // instrukcja trojkata
         int wysokosc;
        cout << "Wybierz wysokosc trojkata" << endl;
        cin >> wysokosc;
        trojkat(wysokosc);
        break;

        default:
            cout << "Niepoprawna liczba!" << endl;

    }

    return 0;
}

