//
#include<iostream>
class D
{
	public:
		int a,b;
		void data(int x,int y)
		{a=x;b=y;}
		friend & operator+(D c1,D c2)
		{
			float tempX,tempY;
			tempX=c1.a+ c2.a;
			tempY=c1.b+ c2.b;
			int tempz[2]={tempX,tempY};
			return *tempz;
		}
};
int main()
{
	int x1,x2,y1,y2;
	D d1,d2,d3;
	printf("enter the value of x1 and x2\n");
	scanf(" %d%d",&x1,&x2);
	d1.data(x1,x2);
	printf("enter the value of y1 and y2\n");
	scanf(" %d%d",&y1,&y2);
	d2.data(y1,y2);
	int *result= &(d1+d2);
	printf("%d %d\n",result[0],result[1]);
	return 0;
}

