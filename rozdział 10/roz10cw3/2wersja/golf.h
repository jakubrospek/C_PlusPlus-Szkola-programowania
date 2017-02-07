
const int Len = 40;

class golf
{
      private:
       char fullname[Len];
       int handicap;
       int spr;
       
       public:
              golf(golf & s)                    // konstruktor obiektu ob4, jego argumentem jest ob4 ;)
              {
                        s.setgolf();
              }
              
              golf(int hc=0, int s=0)           // konstruktor domyœlny (parametryzowany) tylko z takim mo¿na stworzyæ tablice obiektów, niezbêdne 'this->'
              {
                         strcpy(fullname,"");
                         this->handicap = hc;
                         this->spr = s;
              }
              
              
              golf(const char * name, int hc, int s)
              {
                        strcpy(fullname,name);
                        handicap = hc;
                        spr = s;
              }

int setgolf/*golf*/()                                          // golf() konstruktor domyœlny / int setgolf() + return 0 metoda klasy golf
{
    cout << "Podaj nazwisko: (q - pomin)" << endl;
     cin >> fullname;
     if(fullname[0] == 'q')
     {
                      strcpy(fullname,"pominieto");
                      spr = 1;
                      cout << endl;
                      return 0;
     }
     cout << "Podaj wartosc handicap:" << endl;
     cin >> handicap;
     cout << endl;
}

void hcp(int hc)
{
     handicap = hc;
     strcpy(fullname,"brak danych");
}

void showgolf()
{
     cout << "Nazwisko: " << fullname << endl;
     cout << "hc: " << handicap << endl;
}

int check()
{
    return spr;
}

};

