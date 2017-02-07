#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream inFile;
    
    double tab[15]={0},suma=0,srednia=0;
    int i=0, j=0;
    inFile.open("dane.txt");
    
    while(inFile.good())
    {
          inFile >> tab[i];
          suma += tab[i];
          i++; 
    }
    
    srednia = suma / i;
    
    while(tab[j]!=0)
    {
            cout << tab[j] << endl;
            j++;
    }
    
    cout << endl;
    cout << "Srednia wszystkich wartosci: " << srednia << endl;
    cout << endl;
    
    cout << "Wartosci wieksze od sredniej: " << endl;
    
    for(j=0; j<i; j++)
    {
                    if(tab[j] > srednia)
                    {
                     cout << tab[j] << endl;
                     
                     }
    }
    
    system("pause");
    return 0;
}
