#include<iostream>

using namespace std;

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
