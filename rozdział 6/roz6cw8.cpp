#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
    string alfabet;
    fstream plik;
    plik.open("roz6cw8.txt");
    
    plik >> alfabet;
    
    cout << alfabet << endl;
    cout << "Ilosc wczytanych znakow: " << alfabet.length()<< endl;    
    
    system("pause");
    return 0;
}
