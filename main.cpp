#include <iostream>
#include <cmath>

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

     	cout << "\nMiejsce zerowe funkcji y = "<< a << "x" << "+ " << b << " wynosi x = " << x << endl;
	}
}

void funkcja_kwadratowa_ogolna()
{
    float a,b,c,x1,x2,delta;

    cout << "Witaj w programie do obliczania miejsc zerowych funkcji kwadratowej!\n" << endl;

    do
    {
        cout << "Podaj a = ";
        cin >> a;

        if (a == 0)
	    {
	    	cout << "Sproboj ponownie! Podaj a != 0" << endl << endl;
		}
    } while (a==0);

	cout << "Podaj b = ";
	cin >> b;

	cout << "Podaj c = ";
	cin >> c;

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

int main()
{
	funkcja_kwadratowa_ogolna();

    return 0;
}
