#include<iostream>
#include<cmath>

using namespace std;
/*
int main()
{
    float cm;
    float s, c;
    float const stopa = 30.48;
    float const cal = 2.54;
    
    cout << "Podaj wzrost w cm: ";
    cin >> cm;
    
    s = cm / stopa;
    c = cm / cal;
    
    cout << cm << " centymetrow to " << s << " stopy." << endl;
    cout << cm << " centymetrow to " << c << " cale." << endl;
    
    system("pause");
    return 0;
}
*/

int main()
{
    int stopy, cale;
    int wzrost;
    float w_metrach;
    float waga;
    float waga_kg;
    float BMI;
    
    cout << "Podaj wzrost w stopach i (po spacji) calach: ";
    cin >> stopy;
    cin >> cale;
    cout << "Podaj wage w funtach: ";
    cin >> waga;
    
    wzrost = (stopy * 12) + cale;
    w_metrach = wzrost * 0.0254;
    
    waga_kg = waga / 2.2;
    
    BMI = waga_kg / pow(w_metrach,2);
    
    cout << "Twoj wskaznik BMI wynosi: " << BMI << endl;
    
    system("pause");
    return 0;
}
