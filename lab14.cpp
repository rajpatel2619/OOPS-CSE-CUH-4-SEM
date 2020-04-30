// program to show hybrid inheritance..
#include<iostream>
using namespace std;
class rectangle
{   protected:
    int length,width;
        public:
            void getData()
            {
                cout<<"Enter the length of the rectangle "<<endl;
                cin>>length;
                cout<<"Enter the width for the rectangle : "<<endl;
                cin>>width;
            }
};
class area :virtual public rectangle
{
    protected:
    int a;
        public:
            void aCal()
            {
                a=length*width;
            }
};
class perimeter : virtual public rectangle
{
    protected:
    int p;
        public:
        void pCal()
        {
            p= 2*(length+width);
        }
};
class result :public area ,public perimeter
{
    public:
        void display()
        {
            cout<<"\n area of rectangle is: "<<a;
            cout<<"\n perimeter of rectangle is: "<<p;
        }

};
int main()
{
    result r;
    r.getData();
    r.aCal();
    r.pCal();
    r.display();
}
