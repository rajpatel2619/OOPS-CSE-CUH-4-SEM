//program to show multiple inheritance

#include<iostream>
using namespace std;
class length//base class 1
{
    public:
    int x;
    void getx()
    {
        cout<<"enter the length of rectangle: "<<endl;
        cin>>x;
    }
};
class breadth//base class 2
{
public:
int y;
 void gety()
 {
     cout<<"enter breadth of rectangle: "<<endl;
     cin>>y;
 }
};
class area :public length,public breadth//the drived class from length and breadth
{
public:
void result()
{
    cout<<"area of rectangle is : "<<length::x * breadth::y;//used scope resolution to
                                                            //to neglect ambuigity
}
};
int main()
{
    area obj1; //object of derived class area
    obj1.getx();
    obj1.gety();
    obj1.result();
    return 0;
}
