#include<iostream>

using namespace std;

int main()
{
    float zyskDafne = 100, zyskCleo = 100, zyskTemp;
    int lata = 0, i = 1;
    
    zyskTemp = (0.10 * 100);
    zyskDafne += zyskTemp;
    
    zyskCleo += (0.05 * 100);
    
    while(zyskCleo <= zyskDafne)
    {
                   zyskDafne += zyskTemp;
                   zyskCleo += (0.05 * zyskCleo);
                   lata += 1;
    }
    
    float * Dafne = new float[lata+2];
    float * Cleo = new float[lata+2];
    
    zyskTemp = 0;
    zyskDafne = 100;
    zyskCleo = 100;
    
    zyskTemp = (0.10 * 100);
    zyskDafne += zyskTemp;
    
    zyskCleo += (0.05 * 100);
    
    Dafne[0] = zyskDafne;
    Cleo[0] = zyskCleo;
    
    while(zyskCleo <= zyskDafne)
    {
                   zyskDafne += zyskTemp;
                   zyskCleo += (0.05 * zyskCleo);
                   //lata += 1;
                   
                   Dafne[i] = zyskDafne;
                   Cleo[i] = zyskCleo;
                   
                   i++;
    }
    
    for(int j=0; j<lata+1; j++)
    {
            
            cout << j+1 << " rok:" << endl;
            cout << "\toszczednosci Cleo: " << Cleo[j] << " zl" << endl;
            cout << "\toszczednosci Dafne: " << Dafne[j] << " zl" << endl;
    }
    
    cout << endl;
    
    system("pause");
    return 0;
}
