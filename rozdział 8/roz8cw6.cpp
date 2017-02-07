#include<iostream>
#include<cstring>

using namespace std;

template<typename T>
void maxn(T tab[], int rozmiar);

template<>void maxn<string>(string tab[], int rozmiar);    // <string> to nowy typ zwracany przez funkcjê, w tym przypadku mo¿na go pomin¹æ bo pierwowzór funkcjii nic nie zwraca - void

int main()
{
    int tab1[5] = {1,2,3,4,5};
    double tab2[4] = {1.1,1.2,1.3,1.4};
    string tab3[3] = {"Ala","ma","kota"};
    
    maxn(tab1, 5);
    cout << endl;
    maxn(tab2, 4);
    cout << endl;
    maxn(tab3, 3);
    
    system("pause");
    return 0;
}

template<typename T>
void maxn(T tab[], int rozmiar)
{
         T max = tab[0];
         T min = tab[0];
     
     for( int i = 1; i < rozmiar; i++ )
     {
          if( tab[ i ] > max )
          max = tab[ i ]; //jeœli sprawdzany element tablicy jest wiêkszy od tego (dotychczas) najwiêkszego, to on staje siê tym najwiêkszym 
    
          if( tab[ i ] < min )
          min = tab[ i ]; //jeœli sprawdzany element tablicy jest mniejszy od tego (dotychczas) najmniejszego, to on staje siê tym najmniejszym
    
    }
    
    cout << "Najwieksza wartosc w tablicy: " << max << endl;
    cout << "Najmniejsza wartosc w tablicy: " << min << endl;
}

template<>void maxn<string>(string tab[], int rozmiar)    // <string> to nowy typ zwracany przez funkcjê, w tym przypadku mo¿na go pomin¹æ bo pierwowzór funkcjii nic nie zwraca - void 
{
         int max = tab[0].length();
         int min = tab[0].length();
         string MAX, MIN;
     
     for( int i = 1; i < rozmiar; i++ )
     {
          if(tab[i].length() > max)
          {
                            max = tab[i].length(); //jeœli sprawdzany element tablicy jest wiêkszy od tego (dotychczas) najwiêkszego, to on staje siê tym najwiêkszym
                            MAX = tab[i];
          }
    
          if(tab[i].length() < min )
          {
                            min = tab[i].length(); //jeœli sprawdzany element tablicy jest mniejszy od tego (dotychczas) najmniejszego, to on staje siê tym najmniejszym
                            MIN = tab[i];
          }
    
    }
    
    cout << "Najdluzszy lancuch w tablicy: " << MAX << " : " << max << " znaki," << " adres: " << &MAX << endl;
    cout << "Najkrotszy lancuch w tablicy: " << MIN << " : " << min << " znaki," << " adres: " << &MIN << endl;
}
