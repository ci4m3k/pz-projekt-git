#include <iostream>

using namespace std;

int main()
{
    float a,b,x;

    cout << "Witaj w programie do obliczania miejsc zerowych funkcji liniowej!\n" << endl;

    do 
	{
	    cout << "Podaj a = ";
	    cin >> a;
	    
	    if (a == 0)
	    {
	    	cout << "Sproboj ponownie! Podaj a != 0" << endl << endl;
		}
    } while (a == 0);

	
	cout << "Podaj b = ";
	cin >> b;

    x = -b/a;

     cout << "\nMiejsce zerowe funkcji y = "<< a << "x" << "+ " << b << " wynosi x = " << x << endl;

    return 0;
}
