//program to demonstrate multilevel inheritance..
//by checking if a number is less or greater than 100
#include<iostream>
using namespace std;
class random
{
    protected:
    int number;
        public:
        void getNumber()
        {
        cout<<"Enter random number"<<endl;
        cin>>number;
        }
};
class test :public random
{
protected:
int res=0;
public:
void checkNumber()
{
    if(number<100)
    {
        res=1;
    }}};
class result :public test
{
public:
void printNumber()
{
    if(res==1)
    {
        cout<<"your number is less than 100"<<endl;
    }
    else
    {
    cout<<"its greator than 100";
    }
    }};

    int main()
{
        result num;
        num.getNumber();
        num.checkNumber();
        num.printNumber();
        return 0;
    }
