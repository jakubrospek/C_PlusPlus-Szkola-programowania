#include<iostream>

using namespace std;

int main()
{
    long int sekundy;
    long int s, m, g, d;
    long int r_m, r_g;
    
    cout << "Podaj liczbe sekund: ";
    cin >> sekundy;
    
    d = sekundy / (24 * 3600);
    g = sekundy / 3600;
    m = sekundy / 60;
    s = sekundy - (m * 60);
    
    r_m = m - ((m/60)*60);
    r_g = g - ((g/24)*24);
    
    cout << sekundy << " sekund = " << d << " dni, " << r_g << " godzin, " << r_m << " minut, " << s << " sekund." << endl;
    
    system("pause");
    return 0;
}
