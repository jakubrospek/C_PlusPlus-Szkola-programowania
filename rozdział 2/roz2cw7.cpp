#include<iostream>

using namespace std;

void Czas(int & godziny, int & minuty)          // przekazywanie argumentu przez referencjê
{
     cout << "Czas: " << godziny << ":" << minuty << endl;
}

int main()
{
    int godziny, minuty;
    
    cout << "Podaj liczbe godzin: ";
    cin >> godziny;
    cout << "Podaj liczbe minut: ";
    cin >> minuty;
    
    cout << endl;
    
    Czas(godziny, minuty);
    
    
    system("pause");
    return 0;
}
