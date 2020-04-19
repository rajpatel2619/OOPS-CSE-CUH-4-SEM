//program for checking that the given number is even or odd
#include<iostream>
using namespace std;
class EvenOdd{
private:
    int x;
public:
    EvenOdd(int a){
    x=a;
    }
    checkEvenOdd(){
    if(x%2==0){
        cout<<"the number is even";
    }
    else
        cout<<"number is odd";
    return 0;
    }
};

int main(){
int a;
cout<<"enter the number";
cin>>a;
EvenOdd obj(a);
obj.checkEvenOdd();
return 0;
}

