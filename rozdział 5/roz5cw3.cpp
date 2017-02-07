#include<iostream>

using namespace std;

int main()
{
    
    int liczba,suma=0;
    
    while(liczba != 0)
    {
                 cout << "Podaj liczbe: ";
                 cin >> liczba;
                 
                 suma += liczba;
                 
                 if(liczba != 0)
                 {
                 cout << "Suma liczb: " << suma << endl;
                 }
    }
    
    system("pause");
    return 0;
}
