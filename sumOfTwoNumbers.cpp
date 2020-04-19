
//programm for sum of two numbers..class methos
#include <iostream>
using namespace std;
class sumOfTwo
{
private:
    int x,y;

public:
  sumOfTwo(int a[2]){
  x=a[0];
  y=a[1];
  }
  sum(){
  cout<<"sum of both number is: "<<x+y;
}
};
int main()
{
    int a[2],i;
    cout<<"enter two numbers: ";
    for(i=0;i<2;i++){
    cin>>a[i];
    }
    sumOfTwo obj(a);
    obj.sum();
    return 0;
}
