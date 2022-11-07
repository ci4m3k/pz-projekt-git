#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

void funkcja_liniowa(double a, double b)
{
    double x;

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

void funkcja_kwadratowa(double a, double b, double c)
{
    double x1,x2,delta;

	if (a == 0)
    {
        funkcja_liniowa(b,c);
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

void funkcja_kwadratowa_kanoniczna(double a, double p, double q)
{
    double x1,x2,delta;
	delta = -q/4*a;

    if(delta < 0)
    {
        cout << "\nFunkcja nie posiada miejsc zerowych!";
    }
    else if (delta == 0)
    {
        x1 = p;
        cout << "\nFunkcja ma jedno miejsce zerowe x = " << x1;
    }
    else
    {
        x1 = p-sqrt(-q/a);
        x2 = p+sqrt(-q/a);
        cout << "\nFunkcja ma dwa miejsca zerowe x1 = " << x1 << ", x2 = " << x2;
    }
}

int main()
{
	int wybor=0;
	double a,b,c,p,q;

	while (wybor>3 || wybor<1)
    {
        cout << "MENU" << endl;
        cout << "1. Funkcja liniowa" << endl;
        cout << "2. Funkcja kwadratowa" << endl;
        cout << "3. Funkcja kwadratowa - postac kanoniczna" << endl;

        cout << "\nWybierz: ";
        cin >> wybor;

        system("cls");
    }

    switch(wybor)
    {
    case 1:
        cout << "Witaj w programie do obliczania miejsc zerowych funkcji liniowej!\n" << endl;

        cout << "Podaj a = ";
        cin >> a;

        cout << "Podaj b = ";
        cin >> b;

        funkcja_liniowa(a,b);
        break;
    case 2:
        cout << "Witaj w programie do obliczania miejsc zerowych funkcji kwadratowej!\n" << endl;

        cout << "Podaj a = ";
        cin >> a;

        cout << "Podaj b = ";
        cin >> b;

        cout << "Podaj c = ";
        cin >> c;

        funkcja_kwadratowa(a,b,c);
        break;
    case 3:
         cout << "Witaj w programie do obliczania miejsc zerowych funkcji kwadratowej (w postaci kanonicznej)!\n" << endl;

        cout << "Podaj a = ";
        cin >> a;

        cout << "Podaj p = ";
        cin >> p;

        cout << "Podaj q = ";
        cin >> q;

        funkcja_kwadratowa_kanoniczna(a,p,q);
        break;
    default:
        break;
    }

    return 0;
}
