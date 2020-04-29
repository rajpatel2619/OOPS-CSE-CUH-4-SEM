
#include<iostream>
using namespace std;
class arethematic
{   protected:
    int num1,num2;
        public:
            void getdata()
            {
                cout<<"enter first no for arethematic operation: "<<endl;
                cin>>num1;
                cout<<"enter second no for arethematic operation: "<<endl;
                cin>>num2;
            }
};
class Plus :virtual public arethematic
{
    protected:
    int sum;
        public:
            void add()
            {
                sum=num1+num2;
            }
};
class Minus : virtual public arethematic
{
    protected:
    int sub;
        public:
        void subtract()
        {
            sub= num1-num2;
        }
};
class result :public Plus ,public Minus
{
    public:
        void display()
        {
            cout<<"\n sum of "<<num1<<" and "<<num2 <<" = "<<sum;
            cout<<"\n difference of "<<num1<<" and "<<num2<<" = "<<sub;
        }

};
int main()
{
    result z;
    z.getdata();
    z.add();
    z.subtract();
    z.display();
}
