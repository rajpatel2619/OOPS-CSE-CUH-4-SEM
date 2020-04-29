//program to demonestrate multilevel inhereatence
#include<iostream>
using namespace std;
class Student //base class
{
    protected:
    int marks;
        public:
        void accept()
        {
        cout<<"enter your marks"<<endl;
        cin>>marks;
        }
};
class test :public Student//1st inherated class
{
protected:
int p=0;
public:
void check()
{
    if(marks>60)
    {
        p=1;
    }}};
class result :public test//second inherated class
{
public:
void print()
{
    if(p==1)
    {
        cout<<"you have passed"<<endl;
    }
    else
    {
    cout<<"you have not passed";
    }
    }};
    int main()
    {
        result r;
        r.accept();
        r.check();
        r.print();
        return 0;
        }
