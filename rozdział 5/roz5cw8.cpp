#include<iostream>
#include<string>

using namespace std;

int main()
{
    string slowo = "";
    int licz=0;
    
    cout << "Podawaj slowa (kiedy skonczysz napisz 'gotowe')" << endl;
    
    while(slowo != "gotowe" )
    {
                cin >> slowo;
                
                if(slowo != "gotowe")
                {
                    licz += 1;
                }
    }
    
    cout << endl;
    cout << "Podano " << licz << " slow." << endl;
    cout << endl;
    
    
    system("pause");
    return 0;
}
