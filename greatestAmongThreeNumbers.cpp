//programm for fiinding the greatest number among the three numbers using function ....class methos
#include <iostream>
using namespace std;
class greatorNumber
{
private:
    int x,y,z;

public:
  greatorNumber(int a[3]){
  x=a[0];
  y=a[1];
  z=a[2];
  }
  checkGreatest(){
  if(x>y && x>z)
    cout<<"greatest value is: "<< x;

  else if(y>x && y>z)
    cout<<"greatest value is: "<<y;

  else if(z>x && z>y)
    cout<<"greatest value is: "<<z;

  else
    cout<<"something went wrong";
  }
};
int main()
{
    int a[3],i;
    cout<<"enter three numbers: ";
    for(i=0;i<3;i++){
    cin>>a[i];
    }
    greatorNumber obj(a);
    obj.checkGreatest();
    return 0;
}
