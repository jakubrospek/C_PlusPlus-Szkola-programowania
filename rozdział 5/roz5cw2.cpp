#include<iostream>

using namespace std;

int main()
{
    
    long double silnia = 1;
    
    for(int i=1; i<101; i++)
    {
            for(int j=1; j<i+1; j++)
            {
             silnia *= j;
            }
            cout << i << "! = " << silnia << endl;
            silnia = 1;
    }
    
    //cout << silnia << endl;
    
    system("pause");
    return 0;
}
