#include <iostream>

using namespace std;


// maluj trojkat
void trojkat(int wysokosc)
{
    int spacje;
    int hashe;


    if (wysokosc<=1)
	{
        cout << "Za mala wartosc wysokosci!";
        return;
    }

	spacje  = wysokosc - 1;
	hashe = 1;
   	 for (int i = 0; i <wysokosc; i++)
    {
        for (int j = 0; j<spacje; j++)
        {
            cout << " ";
        }

        for (int k=0; k <hashe; k++)
        {
            cout << "#";

        }

        hashe += 2;
        spacje--;
        cout << endl;
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

