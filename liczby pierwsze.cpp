#include<iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    bool spr = true;
    
    for(int i=2; i<a; i++)
    {
            if(a%i==0)
            {
                      spr = false;
            }
            
    }
    
    if(spr == true)
    {
           cout << "Liczba " << a << " jest liczba pierwsza" << endl;
    }
    else
    {
        cout << "Liczba " << a << " nie jest liczba pierwsza" << endl;
    }
    
    
    system("pause");
    return 0;
}
