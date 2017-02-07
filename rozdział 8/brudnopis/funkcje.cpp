#include<iostream>

using namespace std;

int & dodaj1(int &a);                       // funkcja pobieraj�ca referencj� i zwracaj�ca referencj� ( modyfikuje oryginaln� warto�� )
int dodaj2(int a);                         // funkcja pobieraj�ca warto�� i modyfikuj�ca jej lokaln� kopi� w ramach tej funkcjii
void dodaj3(int &a, int(*pf)(int));        // funkcja pobieraj�ca referencj� i wska�nik do innej funkcjii
void dodaj4(int a, int(*pf)(int));         // funkcja pobieraj�ca warto�� (lokalna kopia) i wska�nik do innej funkcjii
int dodaj5(int &a);

int main()
{
    int a = 4;
    int b=0;
    
    cout << "Wartosc globalna: a=" << a << endl;
    cout << "Wartosc globalna: b=" << b << endl << endl;
    
    dodaj1(a);
    cout << "int & dodaj1(int &a)" << endl;
    
    cout << "a=" << a << endl << endl;
    cout << "int dodaj2(int a)" << endl;
    
    b = dodaj2(a);
    
    cout << "a=" << a << endl << endl;
    cout << "b=dodaj2(int a)" << endl;
    cout << "b=" << b << endl << endl;
    cout << "void dodaj3(int &a, int * dodaj2(a))" << endl;
    
    dodaj3(a, dodaj2);
    
    cout << "a=" << a << endl << endl;
    cout << "void dodaj4(int a, int * dodaj2(a))" << endl;
    
    dodaj4(a, dodaj2);
    
    cout << "a=" << a << endl << endl;
    cout << "int dodaj5(int &a)" << endl;
    
    dodaj5(a);
    
    cout << "a=" << a << endl << endl;
    
    system("pause");
    return 0;
}

int & dodaj1(int &a)
{
    return a+=1;
}

int dodaj2(int a)
{
    return a+2;
}

void dodaj3(int &a, int(*pf)(int))
{
     a+=3+(*pf)(a);
}

void dodaj4(int a, int(*pf)(int))
{
     a+=4+(*pf)(a);
     cout << "Wartosc lokalna funkcjii: " << a << endl << endl;
}

int dodaj5(int &a)
{
    a+=5;
}
