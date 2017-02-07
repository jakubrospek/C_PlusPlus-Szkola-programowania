#include<iostream>

using namespace std;

struct sprint
{
       float czas1;
       float czas2;
       float czas3;
       
       float srednia;
};

int main()
{
    
    sprint s1;
    
    cout << "1 czas: ";
    cin >> s1.czas1;
    cout << "2 czas: ";
    cin >> s1.czas2;
    cout << "3 czas: ";
    cin >> s1.czas3;
    
    s1.srednia = (s1.czas1 + s1.czas2 + s1.czas3)/3;
    
    cout << "Srednia: " << s1.srednia << endl;
    
    system("pause");
    return 0;
}
