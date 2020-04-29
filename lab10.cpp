// program to demonstrate the concept of constructor

#include<iostream>
using namespace std;
/*
Program to overload a constructor.
Program to use a copy constructor to transfer the names of one object to the other.
*/
class Test
{
	public:
		int x,y;
		Test()
		{
			x=-1;
			y=-1;
		}
		Test(int a)
		{
			x=a;
		}
		Test(int a, int b)
		{
			x=a;
			y=b;
		}


};
class Name
{
	public:
	string firstName,middleName,lastName;
	Name(string first, string middle, string last)
	{
		firstName=first;
		middleName=middle;
		lastName=last;
		cout<<"\n\nConstructor call"<<endl;
	}
	Name(const Name &nm)
	{
		firstName=nm.firstName;
		middleName=nm.middleName;
//		lastName="abc";


	}

};
void display(Test t)
{
	printf("x=%d y=%d\n",t.x,t.y);
}
void display(Name n)
{
	cout<<"First Name:\n"<<n.firstName<<"\nMiddle Name:\n"<<n.middleName<<"\nLast Name:\n"<<n.lastName<<endl;
}
int main()
{
	Test t1=Test();
	Test t2= Test(1);
	Test t3=Test(2,3);
	display(t1);
	display(t2);
	display(t3);
	string first,middle,last;
	printf("First name:\n");
	getline(cin,first);
	printf("Middle name:\n");
	getline(cin,middle);
	printf("Last name:\n");
	getline(cin,last);
	cout<<"n1 object"<<endl;
	Name n1(first, middle,last);
	display(n1);
	Name n2=n1;
	cout<<"\n\n\nAfter using copy constructor"<<endl;
	display(n2);
	return 0;
}

