#include<iostream>
#include<cstring>
#include<new>

const int BUF = 9;

using namespace std;

struct chaff
{
       char dross[20];
       int slag;
};

void fill1(chaff * arg);        // tablice ZAWSZE przekazujemy do funkcjii przez wskaŸnik
void fill2(chaff * arg);

void show(chaff * arg);

int main()
{
    chaff *p1, *p2;            // wskaŸniki typu chaff
    int buffer[BUF];         // tablica statyczna pod której adresem bêdzie alokowana tablica dynamiczna (dlaczego BUF musi byæ 9? poni¿ej 9 sie sypie)                             

    
    p1 = new (buffer) chaff[2];         // miejscowy operator new
    p2 = new chaff[2];                  // zwyk³y operator new
    
    cout << "Adres statycznej tablicy int 'buffer': " << endl;
    cout << &buffer << endl << endl;
    cout << "Adres dynamicznej tablicy chaff 'p1' zaalokowanej pod adresem tablicy 'buffer':" << endl;
    cout << p1 << endl << endl;
    
    cout << "Adres dynamicznej tablicy chaff 'p2' zaalokowanej pod losowym adresem:" << endl;
    cout << p2 << endl << endl;
    
    fill1(p1);
    show(p1);
    delete [] p1;
    
    //fill2(p2);
    //show(p2);
    //delete [] p2;
    
    system("pause");
    return 0;
}

void fill1(chaff * arg)
{
     char temp[20];
     cout << "Podaj wartosc 'dross' (string)" << endl;
     for(int i=0; i<2; i++)
     {
             cin >> temp;
             strcpy(arg[i].dross,temp);
     }
     cout << endl;
     cout << "Podaj wartosc 'slag' (int)" << endl;
     for(int i=0; i<2; i++)
     {
             cin >> arg[i].slag;
     }
}

void fill2(chaff * arg)
{
     char temp[20];
     cout << "Podaj wartosc 'dross' (string)" << endl;
     for(int i=0; i<2; i++)
     {
             cin >> temp;
             strcpy(arg[i].dross,temp);
     }
     cout << endl;
     cout << "Podaj wartosc 'slag' (int)" << endl;
     for(int i=0; i<2; i++)
     {
             cin >> arg[i].slag;
     }
}

void show(chaff * arg)
{
     for(int i=0; i<2; i++)
     {
             cout << endl;
             cout << "Pozycja " << i+1 << endl << endl;
             cout << "dross: " << arg[i].dross << endl;
             cout << "slag: " << arg[i].slag << endl;
     }
}



