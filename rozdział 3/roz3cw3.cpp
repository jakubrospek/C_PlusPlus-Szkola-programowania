#include<iostream>

using namespace std;

int main()
{
    float stopnie, minuty, sekundy, calosc_sek, wynik;
    
    cout << "Podaj dlugosc w stopniach, minutach i sekundach: ";
    cin >> stopnie;
    cin >> minuty;
    cin >> sekundy;
    
    calosc_sek = (((stopnie * 60) + minuty) * 60) + sekundy;
    wynik = calosc_sek / 3600;
    
    cout << stopnie << " stopni, " << minuty << " minut, " << sekundy << " sekund = " << wynik << " stopni." << endl;
    
    system("pause");
    return 0;
}
