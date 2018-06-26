#include<iostream>
using namespace std;

class CStu
{
public:
      int nAge;
      CStu()
      {
          nAge=12;
      }
      //++a
      int operator ++()
      {
            this->nAge+=1;
            return this->nAge;
      }
      //--a
      int operator --()
      {
            this->nAge-=1;
            return this->nAge;
      }
      //a++
      int operator ++(int n)
      {
            n=this->nAge;
            this->nAge+=1;
            return n;
      }
      //a--
      int operator --(int n)
      {
            n=this->nAge;
            this->nAge-=1;
            return n;
      }
};
/*
int operator ++(CStu& s)
{
      s.nAge+=1;
      return s.nAge;
}
*/
//a++
/*
int operator ++ (CStu& s,int n)
{
      n=s.nAge;
      s.nAge+=1;
      return n;
}
*/
int main()
{
      CStu st;

      cout<<++st<<endl;
      cout<<--st<<endl;

      cout<<st++<<endl;
      cout<<st.nAge<<endl;
      cout<<st--<<endl;
      return 0;
}
