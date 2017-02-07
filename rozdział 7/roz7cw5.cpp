#include<iostream>

using namespace std;

int rekurencja(int parametr)
{
    
    //parametr *= parametr-1;
    if(parametr == 0) return 1;
    else
    {
                return parametr * rekurencja(parametr-1);
    }
}

int main()
{
    cout << rekurencja(3) << endl;
    
    system("pause");
    return 0;
}
