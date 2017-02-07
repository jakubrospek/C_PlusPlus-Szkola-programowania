#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int fill_array(double n[], int r)
{
    int licz=0;
    
       cout << "Podaj cyfry\n";
       for(int i=0; i<r; i++)
       {
               cin >> n[i];
               if(cin==false)
               {
                            break;
               }
               else
               {
                   licz+=1;
               }
       }
       
       return licz;
}

void show_array(double n[], int r)
{
     cout << "Zawartosc tablicy:" << endl;
     for(int i=0; i<r; i++)
     {
             cout << n[i] << " ";
     }
}

void reverse_array(double n[], int r)
{
     double temp;
    for(int i = 0; i < r/2; i++)
    {
        temp = n[r-i-1];
        n[r-i-1] = n[i];
        n[i] = temp;
    }
}

int main()
{
    
    double tab[5];
    
    cout << "Ilosc liczb: " << fill_array(tab,5) << endl;
    show_array(tab,5);
    cout << "\n";
    reverse_array(tab,5);
    show_array(tab,5);
    
    cout << "\n";
    system("pause");
    return 0;
}
