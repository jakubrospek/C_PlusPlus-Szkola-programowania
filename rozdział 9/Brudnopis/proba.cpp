#include<iostream>

using namespace std;

int main()
{
    int n = 2;
    {
          int n = 0;
    }
    cout << n << endl;
    {
          int n = 1;
    }
    n = 3;
    cout << n << endl;
    
    
    system("pause");
    return 0;
}
