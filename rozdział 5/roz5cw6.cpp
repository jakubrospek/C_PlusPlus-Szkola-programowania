#include<iostream>

using namespace std;

struct ksiazka
{
       string miesiac;
       int sprzedaz;
       
};

int main()
{
    
    int sumaR[3] = {0,0,0};
    int sumaC = 0;
    ksiazka k1[3][12]=
    {
            {{"Styczen"},{"Luty"},{"Marzec"},{"Kwiecien"},{"Maj"},{"Czerwiec"},{"Lipiec"},{"Sierpien"},{"Wrzesien"},{"Pazdziernik"},{"Listopad"},{"Grudzien"}},
            {{"Styczen"},{"Luty"},{"Marzec"},{"Kwiecien"},{"Maj"},{"Czerwiec"},{"Lipiec"},{"Sierpien"},{"Wrzesien"},{"Pazdziernik"},{"Listopad"},{"Grudzien"}},
            {{"Styczen"},{"Luty"},{"Marzec"},{"Kwiecien"},{"Maj"},{"Czerwiec"},{"Lipiec"},{"Sierpien"},{"Wrzesien"},{"Pazdziernik"},{"Listopad"},{"Grudzien"}},
    };
    
    cout << "Podaj sprzedaz:" << endl;
    
    for(int i=0; i<3; i++)
    {
            cout << i+1 << " rok:" << endl;
            for(int j=0; j<12; j++)
            {
                    cout << "\tza " << k1[i][j].miesiac << ": ";
                    cin >> k1[i][j].sprzedaz;
            }
    }
    cout << endl;
    
    for(int i=0; i<3; i++)
    {
            for(int j=0; j<12; j++)
            {
             sumaR[i] += k1[i][j].sprzedaz;
            }
    }
    
    for(int i=0; i<3; i++)
    {
            sumaC += sumaR[i];
    }
    
    for(int i=0; i<3; i++)
    {
            cout << "Roczna sprzedaz dla: " << i+1 << " rok: " << sumaR[i] << endl;
    }
    cout << endl;
    
    cout << "Sprzedaz calkowita z 3 lat: " << sumaC << endl << endl;
    
    system("pause");
    return 0;
}
