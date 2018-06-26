#include<iostream>
using namespace std;

class CGrandfather
{
public:
      CGrandfather()
      {
            cout<<"CGrandfather\n";
      }
      ~CGrandfather()
      {
            cout<<"CGrandfather\n";
      };

};

class CFather:public CGrandfather
{
public:
      CFather()
      {
            cout<<"CFather\n";
      }
      ~CFather()
      {
            cout<<"CFather\n";
      };
};

class CSon:public CFather
{
public:
      CSon()
      {
            cout<<"CSon\n";
      }
      ~CSon()
      {
            cout<<"CSon\n";
      };

};

int main()
{
      CSon son;
      return 0;
}
