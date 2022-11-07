#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void funkcja_liniowa()
{
    float a,b,c,x;

    cout << "Witaj w programie do obliczania miejsc zerowych funkcji liniowej!\n" << endl;

 	cout << "Podaj a = ";
	cin >> a;

	cout << "Podaj b = ";
	cin >> b;

    if (a==0 && b == 0)
    {
    	cout << "Funkcja posiada nieskonczenie wiele miejsc zerowych!" << endl;
	}
	else if (a == 0)
	{
		cout << "Funkcja nie posiada miejsc zerowych!" << endl;
	}
	else
	{
		x = -b/a;

     	cout << "\nMiejsce zerowe funkcji y="<< a << "x" << "+" << b << " wynosi x = " << x << endl;
	}
}

void funkcja_kwadratowa()
{
    float a,b,c,x,x1,x2,delta;

    cout << "Witaj w programie do obliczania miejsc zerowych funkcji kwadratowej!\n" << endl;

    cout << "Podaj a = ";
    cin >> a;

	cout << "Podaj b = ";
	cin >> b;

	cout << "Podaj c = ";
	cin >> c;

	if (a == 0)
    {
        if (b==0 && c == 0)
        {
            cout << "Funkcja posiada nieskonczenie wiele miejsc zerowych!" << endl;
        }
        else if (b == 0)
        {
            cout << "Funkcja nie posiada miejsc zerowych!" << endl;
        }
        else
        {
            x = -c/b;

            cout << "\nMiejsce zerowe funkcji wynosi x = " << x << endl;
        }
    }
    else
    {
        delta = (b*b)-4*a*c;

        if(delta < 0)
        {
            cout << "\nFunkcja nie posiada miejsc zerowych!";
        }
        else if (delta == 0)
        {
            x1 = -b/2*a;
            cout << "\nFunkcja ma jedno miejsce zerowe x = " << x1;
        }
        else
        {
            x1 = (-b-sqrt(delta))/2*a;
            x2 = (-b+sqrt(delta))/2*a;
            cout << "\nFunkcja ma dwa miejsca zerowe x1 = " << x1 << ", x2 = " << x2;
        }
    }
}

int main()
{
	int wybor=0;

	while (wybor>2 || wybor<1)
    {
        cout << "MENU" << endl;
        cout << "1. Funkcja liniowa" << endl;
        cout << "2. Funkcja kwadratowa" << endl;

        cout << "\nWybierz: ";
        cin >> wybor;

        system("cls");
    }

    switch(wybor)
    {
    case 1:
        funkcja_liniowa();
        break;
    case 2:
        funkcja_kwadratowa();
        break;
    default:
        break;
    }

    return 0;
}
