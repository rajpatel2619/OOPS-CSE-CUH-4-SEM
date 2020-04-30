//program for the concept of container-ship
#include<iostream>
using namespace std;
class first
   {
          int n1;
          public:
          void getDataFirst();
    };
class second
{
      int n2;
      first x;
      public:
      void getDataSecond();
};
void first :: getDataFirst()
{  cout<<"\nEnter any number for the first class  \n";
   cin>>n1;
   cout<<"this is from first class \n"<<n1;
}
void second :: getDataSecond()
{   cout<<"Enter any number for the second class \n";
   cin>>n2;
   cout<<"this is from second class \n"<<n2;
   x.getDataFirst();
}
int main()
{
   second check;
   check.getDataSecond();
   return 0;
}
