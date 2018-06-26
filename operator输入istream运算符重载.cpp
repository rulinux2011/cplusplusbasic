#include<iostream>
using namespace std;

class CStu
{
private:
      int nAge;
      double dbHeight;
public:
      CStu()
      {
            nAge=0;
            dbHeight=0.0;
      }
      void show()
      {
            cout<<nAge<<endl;
            cout<<dbHeight<<endl;
      }
      friend istream& operator >> (istream& is,CStu& a);

};

istream& operator >> (istream& is,CStu& a)
{
      is>>a.nAge>>a.dbHeight;
      if(is.fail())
      {
            cout<<"failed"<<endl;
            a.nAge=0;
            a.dbHeight=0.0;
      }
      return is;
}

int main()
{
      CStu st1;
      cin>>st1;
      st1.show();
      return 0;
}
