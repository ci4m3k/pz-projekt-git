#include <iostream>

using namespace std;

int main()
{
    float a,b,x;

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

    return 0;
}
