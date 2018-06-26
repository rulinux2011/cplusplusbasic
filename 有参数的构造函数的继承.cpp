#include<iostream>
using namespace std;
class CGrandfather
{
public:
      CGrandfather(int a,int b)
      {
         cout<<"i am Grandfatherclass1\n";
      }
      CGrandfather(int c)
      {
         cout<<"i am Grandfatherclass2\n";
      }
};
class CFather:public CGrandfather
{
public:
      CFather(int a):CGrandfather(a)
      {
            cout<<"i am fatherclass\n";
      }
};

class CSon:public CFather
{
public:
      int b;
      CSon(int a):CFather(a)
      {
            cout<<"i am sonclass\n";
      }
};

int main()
{
      CSon son(1);
      return 0;
}


