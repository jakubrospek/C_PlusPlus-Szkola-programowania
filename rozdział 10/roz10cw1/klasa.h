class Rach_bank
{
      private:
              
      string nazwisko;
      string nr_rach;
      double saldo;
      
      public:
      
      Rach_bank(string n, string nr, double s)
      {
                       nazwisko = n;
                       nr_rach = nr;
                       saldo = s;
      }
      
      void Show()
      {
           cout << endl;
           cout << "Nazwisko: " << nazwisko << endl;
           cout << "Nr rachunku: " << nr_rach << endl;
           cout << "Saldo: " << saldo << endl << endl;
      }
      
      void Depozyt(double s)
      {
               saldo = saldo + s;
      }
      
      void Wydaj(double s)
      {
           saldo = saldo - s;
      }
};
