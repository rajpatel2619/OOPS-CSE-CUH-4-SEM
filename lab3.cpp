// power function

#include<iostream>
int power(int x, int y=2);
void display(int x,int y=2);
int main()
{
	display(2);
	display(2,5);
	return 0;
}
int power(int x,int y)
{
	int i,k=1;
	for(i=0;i<y;i++)
	{
		k=k*x;
	}
	return k;
}
void display(int x,int y)
{
	printf("%d^%2d = %d\n",x,y,power(x,y));
}



