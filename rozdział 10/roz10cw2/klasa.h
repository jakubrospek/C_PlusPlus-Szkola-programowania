class Person
{
      private:
              static const int LIMIT = 256;
              string lname;
              char fname[LIMIT];
              
      public:
             Person()
             {
                     lname = "";
                     fname[0] = '\0';
             }
             
             Person(const string & ln, const char * fn = "HejTy")
             {
                     lname = ln;
                     strcpy(fname, fn);
                     //fname[0] = *fn;
             }
             
             void Show() const
             {
                  cout << lname << " " << fname << endl;
             }
             
             void FormalShow() const
             {
                  cout << fname << " " << lname << endl;
             }
};
