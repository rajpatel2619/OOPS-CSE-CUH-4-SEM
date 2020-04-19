//programm for fiinding the greatest number among the three numbers using function ....class methos

#include <iostream>
using namespace std;


class Matrix
{  int x;
  int arr[10];
  public:
  Matrix(int a)
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
    Matrix obj(a);
    cout<<"enter values of array: ";
    obj.get_array();
    cout<<"array entered is: ";
    obj.display();
    return 0;
}
