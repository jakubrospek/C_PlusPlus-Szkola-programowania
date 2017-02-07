#include<iostream>

using namespace std;

namespace paczka
{
          int a = 1;
          double b = 0.5;
          char tab[5] = {'a','b','c','d','e'};
}

double b = 1.5;

int main()
{
    int a = 2;
    double b = 2.5;
    char tab[5] = {'f','g','h','i','j'};
    
    cout << paczka::a << endl;
    cout << a << endl;
    
    cout << paczka::b << endl;
    cout << ::b << endl;
    cout << b << endl;
    
    for(int i=0; i<5; i++)
    {
            cout << paczka::tab[i] << " ";
    }
    cout << endl;
    for(int i=0; i<5; i++)
    {
            cout << tab[i] << " ";
    }
    cout << endl;
    
    system("pause");
    return 0;
}
