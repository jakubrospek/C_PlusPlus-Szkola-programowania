#include<iostream>

using namespace std;

struct A
{
       int a;
       int aa;
};

struct B
{
       int b;
       int bb;
};

struct C
{
       int c;
       int cc;
};

int funkcja(int w, A parametr1, B parametr2);                // funkcja przekazujπca strukture przez wartoúÊ
int funkcja1(int * w, A * parametr1, B * parametr2);         // funkcja przekazujπca strukture przez wskaünik
int * funkcja2(int * w, A * parametr1, B * parametr2);      // funkcja przekazujπca strukture przez wskaünik (zwracajπca wskaünik)
int funkcja3(int &w, A &parametr1, B &parametr2);          // funkcja przekazujπca strukture przez referencje
int & funkcja4(int &wynik, A &parametr1, B &parametr2);   // funkcja przekazujπca strukture przez referencje (zwracajπca referencjÍ)

int main()
{
    
    C struktura =                                         // inicjalizacja struktury typu C
    {
                1,
                2,
    };
    
    cout << struktura.c << endl;
    cout << struktura.cc << endl << endl;
    
    A ob1;
    B ob2;
    
    ob1.a = 1;
    ob1.aa = 11;
    
    ob2.b = 2;
    ob2.bb = 22;
    
    int wynik0 = 0;
    int wynik1 = 0;
    int wynik2 = 0;
    int wynik3 = 0;
    
    cout << funkcja(wynik0, ob1, ob2) << endl;
    cout << wynik0 << endl;
    
    funkcja1(&wynik0, &ob1, &ob2);
    cout << wynik0 << endl;
    
    funkcja2(&wynik1, &ob1, &ob2);
    cout << wynik1 << endl;
    
    funkcja3(wynik2, ob1, ob2);
    cout << wynik2 << endl;
    
    funkcja4(wynik3, ob1, ob2);
    cout << wynik3 << endl;
    
    system("pause");
    return 0;
}

int funkcja(int w, A parametr1, B parametr2)
{
    w = parametr1.a * parametr2.bb;
    //return w;
}

int funkcja1(int * w, A * parametr1, B * parametr2)
{
    *w = parametr1->a * parametr2->bb;
    //return *w;
}

int * funkcja2(int * w, A * parametr1, B * parametr2)
{
    *w = parametr1->a * parametr2->bb;
    //return *w;
}

int funkcja3(int &w, A &parametr1, B &parametr2)
{
    w = parametr1.a * parametr2.bb;
    //return w;
}

int & funkcja4(int &w, A &parametr1, B &parametr2)
{
    w = parametr1.a * parametr2.bb;
    //return w;
}
