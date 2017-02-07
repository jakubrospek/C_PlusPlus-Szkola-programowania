#include<iostream>

using namespace std;

struct ksiazka
{
       string miesiac;
       int sprzedaz;
       
};

int main()
{
    
    int suma=0;
    ksiazka k1[12]=
    {
            {"Styczen"},
            {"Luty"},
            {"Marzec"},
            {"Kwiecien"},
            {"Maj"},
            {"Czerwiec"},
            {"Lipiec"},
            {"Sierpien"},
            {"Wrzesien"},
            {"Pazdziernik"},
            {"Listopad"},
            {"Grudzien"},
    };
    
    cout << "Podaj sprzedaz:" << endl;
    
    for(int i=0; i<12; i++)
    {
            cout << "\tza " << k1[i].miesiac << ": ";
            cin >> k1[i].sprzedaz;
    }
    
    for(int i=0; i<12; i++)
    {
            suma += k1[i].sprzedaz;
    }
    
    cout << "Roczna sprzedaz lacznie: " << suma << endl;
    
    system("pause");
    return 0;
}
