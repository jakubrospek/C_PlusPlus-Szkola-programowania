#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string imie;
    string nazwisko;
    
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    
    //strcat(nazwisko, ", ");
    //strcat(nazwisko, imie);
    
    nazwisko = nazwisko + ", " + imie;
    
    cout << "Oto informacje zestawione w jeden napis: " << nazwisko << endl;
    
    system("pause");
    return 0;
}
