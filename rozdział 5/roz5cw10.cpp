#include<iostream>

using namespace std;

int main()
{
    int wiersze;
    
    cout << "Podaj liczbe wierszy: ";
    cin >> wiersze;
    
    char ** tab = new char * [wiersze];
    for(int i = 0; i < wiersze; i++)
    {
            tab[i] = new char [wiersze];
    }
    
    for(int i=0; i<wiersze; i++)
    {
            for(int j=0; j<wiersze; j++)
            {
                    if((j+1)>(wiersze-(i+1)))
                    {
                     tab[i][j] = '*';
                    }
                    else
                    {
                        tab[i][j] = '.';
                    } 
            }
    }
    
    cout << endl;
    
    for(int i=0; i<wiersze; i++)
    {
            for(int j=0; j<wiersze; j++)
            {
                    cout << tab[i][j];
            }
            cout << endl;
    }
    
    cout << endl;
    
    system("pause");
    return 0;
}
