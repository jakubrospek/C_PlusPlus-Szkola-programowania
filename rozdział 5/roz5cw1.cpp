#include<iostream>

using namespace std;

int main()
{
    
    int a,b,suma=0;
    
    cout << "Podaj przedzial liczbowy: ";
    cin >> a;
    cin >> b;
    
    for(int i=a; i<b+1; i++)
    {
            suma += i;
    }
    
    cout << "Suma liczb z przedzialu: " << suma << endl;
    
    
    system("pause");
    return 0;
}
