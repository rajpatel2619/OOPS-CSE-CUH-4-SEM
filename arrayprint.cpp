//programm for printing arrays value
#include <iostream>
using namespace std;
class arrayPrint
{
private:
    int x;
    int arr[50];
public:
  arrayPrint(int a)
  {
      x=a;
  }
  void get_array()
  {
      for(int i=0;i<x;i++)
      {
        cin>>arr[i];
      }
  }
  void display()
  {
     for(int i=0;i<x;i++)
      {
              cout<<arr[i]<<" ";
      }
  }
};

int main()
{
    int a;
    cout<<"enter size of array: ";
    cin>>a;
    arrayPrint obj(a);
    cout<<"enter values of array: ";
    obj.get_array();
    cout<<"array entered is: ";
    obj.display();
    return 0;
}
