#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>
using namespace std;

class Address
{
   private:
      string home;
      string street;
      string apt;
      string city;
      string state;
      string zip;

   public:
      Address();
      Address(string, string, string, string, string, string);

      string getHome() const;
      string getStreet() const;
      string getApt() const;
      string getCity() const;
      string getState() const;
      string getZip() const;	  
      void output() const;
      void input();

      friend ostream& operator << (ostream& out, const Address& a);
      friend istream& operator >> (istream& in, Address& a);
};
#endif
