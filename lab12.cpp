//program to show multiple inheritance

#include<iostream>
using namespace std;
class length
{
    public:
    int x;
    void getx()
    {
        cout<<"Enter the length of rectangle: "<<endl;
        cin>>x;
    }
};
class width
{
public:
int y;
 void gety()
 {
     cout<<"Enter width of rectangle: "<<endl;
     cin>>y;
 }
};
class area :public length,public width
{
public:
void result()
{
    cout<<"Area of rectangle is : "<<length::x * width::y;
}
};
int main()
{
    area obj1;
    obj1.getx();
    obj1.gety();
    obj1.result();
    return 0;
}
