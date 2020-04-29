
#include<iostream>
class A
{
	public:
	char a;
	int data(char x)
	{
		a=x;
	}
	 friend A operator ++(A z)
	 {
	 	int q=z.a+2;
	 	char temp=q;
	 	A a=A();
	 	a.data(temp);
	 	return a;

	 }


};



	 int main()
	 {

	 	char a;
	 	a='c';
		 A x=A();
		 x.data(a);
		 A y=++x;
	 	printf("%c",y.a);
	 	return 0;


	 }
