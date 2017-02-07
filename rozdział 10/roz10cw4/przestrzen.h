namespace SALES
{
          const int QUARTERS = 4;
          class Sales
          {
                 private:
                         double sales[QUARTERS];
                         double average;
                         double max;
                         double min;
                         
                 public:
                 
                 Sales(double pd2 = 0, double pd3 = 0, double pd4 = 0)      // konstruktor domy�lny bez parametr�w
                 {
                        average = pd2;
                        max = pd3;
                        min = pd4;
                 }
                 
                 Sales(const double ar[], int n)                            // konstruktor domy�lny z parametrami
                 {
                      double najmniejsza=ar[0], najwieksza=ar[0];
                      
                      sales[0] = 0;
                      
                      for( int i=1; i<n; i++)
                      {
                           if(ar[i] > najwieksza)
                           najwieksza = ar[i]; //je�li sprawdzany element tablicy jest wi�kszy od tego (dotychczas) najwi�kszego, to on staje si� tym najwi�kszym 
    
                           if(ar[i] < najmniejsza)
                           najmniejsza = ar[i]; //je�li sprawdzany element tablicy jest mniejszy od tego (dotychczas) najmniejszego, to on staje si� tym najmniejszym
                           }
     
                           min = najmniejsza;
                           max = najwieksza;
                           average = (min+max)/2;
                           }

                           void setSales2(const double ar[], int n)
                           {
                                double najmniejsza=ar[0], najwieksza=ar[0];
                                int j=0;
     
                                for( int i=1; i<n; i++)
                                {
                                     if(ar[i] > najwieksza)
                                     {
                                              najwieksza = ar[i]; //je�li sprawdzany element tablicy jest wi�kszy od tego (dotychczas) najwi�kszego, to on staje si� tym najwi�kszym 
                                     }
    
                                     if(ar[i] < najmniejsza)
                                     {
                                              najmniejsza = ar[i]; //je�li sprawdzany element tablicy jest mniejszy od tego (dotychczas) najmniejszego, to on staje si� tym najmniejszym
                                     }
                                 }
    
                                 for(int i=0; i<n; i++)
                                 {
                                         sales[j] = std::min(ar[i],ar[i+1]);
                                         if(j<4)
                                         {
                                                j++;
                                         }
                                 }
     
                                 min = najmniejsza;
                                 max = najwieksza;
                                 average = (min+max)/2;
                              }

void setSales2()
{
     std::cout << "Podaj kwoty za 4 kwartaly: \n";
     for(int i=0; i<4; i++)
     {
             std::cin >> sales[i];
     }
     
     double najmniejsza = sales[0], najwieksza = sales[0];
     
     for( int i=1; i<4; i++)
     {
          if(sales[i] > najwieksza)
         najwieksza = sales[i]; //je�li sprawdzany element tablicy jest wi�kszy od tego (dotychczas) najwi�kszego, to on staje si� tym najwi�kszym 
    
         if(sales[i] < najmniejsza)
         najmniejsza = sales[i]; //je�li sprawdzany element tablicy jest mniejszy od tego (dotychczas) najmniejszego, to on staje si� tym najmniejszym
    
    }
     
     min = najmniejsza;
     max = najwieksza;
     average = (min+max)/2;
     
}

void showSales()
{
     if(sales[0]!=0)
     {
                      std::cout << "Kwoty za 4 kwartaly ze struktury SALES: \n";
                      for(int i=0; i<4; i++)
                      {
                              std::cout << sales[i] << " ";
                      }
                      std::cout << "\n";
     }
     
     std::cout << "Wartosc najmniejsza, najwieksza, srednia : \n";
     std::cout << " " << min  << " " << max << " " << average << "\n";
}
          };
}
