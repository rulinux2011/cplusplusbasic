#include<iostream>
using namespace std;

class CStu
{
private:
      int nAge;
public:
      CStu()
      {
            nAge=12;
      }
      friend ostream& operator << (ostream& os,const CStu& a);
};

ostream& operator << (ostream& os,const CStu& a)
{
    os<<a.nAge;
    return os;
}

int main()
{
      CStu st;
      cout<<st<<st;
      return 0;
}
