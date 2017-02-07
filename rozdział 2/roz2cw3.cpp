#include <iostream>

using namespace std;

void entliczek()
{
     cout << "Entliczek pentliczek" << endl;
}

void pentliczek()
{
     cout << "Czerwony stoliczek" << endl;
}

int main()
{
    
    for(int i=0; i<2; i++)
    {
            entliczek();
    }
    
    for(int i=0; i<2; i++)
    {
            pentliczek();
    }
    
    system("pause");
    return 0;
}
