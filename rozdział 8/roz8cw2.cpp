#include<iostream>

using namespace std;

struct batonik
{
       string marka;
       double waga;
       int kalorie;
};

batonik & funkcja(batonik & parametr1, char * parametr2, double parametr3, int parametr4);
batonik & pokaz(batonik & parametr1);

int main()
{
    batonik ob1 = {"Millenium Munch", 2.85, 350};
    
    pokaz(ob1);
    
    funkcja(ob1, "Mars", 3.22, 5);
    
    pokaz(ob1);
    
    system("pause");
    return 0;
}


batonik & funkcja(batonik & parametr1, char * parametr2, double parametr3, int parametr4)
{
        parametr1.marka = parametr2;
        parametr1.waga = parametr3;
        parametr1.kalorie = parametr4;
}

batonik & pokaz(batonik & parametr1)
{
        cout << "Marka: " << parametr1.marka << endl;
        cout << "Waga: " << parametr1.waga << endl;
        cout << "Kalorie: " << parametr1.kalorie << endl;
}
