#include<iostream>

using namespace std;

struct pudlo
{
       char producent[40];
       float wysokosc;
       float szerokosc;
       float dlugosc;
       float objetosc;
};

void wartosc(pudlo argument)
{
     cout << argument.producent << endl;
     cout << argument.wysokosc << endl;
     cout << argument.szerokosc << endl;
     cout << argument.dlugosc << endl;
     cout << argument.objetosc << endl;    
}

void adres(pudlo * arg)
{
     arg->objetosc = arg->wysokosc * arg->dlugosc * arg->szerokosc;
     cout << "Objetosc: " << arg->objetosc << endl;
}

int main()
{
    pudlo s1;
    s1.producent[0] = 'V';
    s1.producent[1] = 'o';
    s1.producent[2] = 'l';
    s1.producent[3] = 'v';
    s1.producent[4] = 'o';
    s1.wysokosc = 2.1;
    s1.szerokosc = 3.4;
    s1.dlugosc = 6.1;
    s1.objetosc = 12.0;
    
    wartosc(s1);
    adres(&s1);
    
    system("pause");
    return 0;
}
