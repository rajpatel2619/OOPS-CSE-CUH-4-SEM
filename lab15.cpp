

#include<iostream>
using namespace std;
class A
   {
          int a;
          public:
          void get();
    };
class B
{
      int b;
      A t;         // object t of class A is declare in class B
      public:
      void getdata();
};
void A :: get()
{  cout<<" \nenter for first class \n";
   cin>>a;
   cout<<"result from ur first class \n"<<a;
}
void B :: getdata()
{   cout<<"enter for second classs\n";
   cin>>b;
   cout<<"result from second class \n"<<b;
   t.get();                  //calling of get() of class A in getdata() of class B
}
int main()
{
   B ab;
   ab.getdata();
   return 0;
}
