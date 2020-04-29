// program to make a use of inline function

#include <iostream>
class Square
{
	public:
		int x;
		Square(int a)
		{
			x=a;
		}
	public:
		inline int find_square()
		{
			return x*x;
		}

};
int main()
{
	int x;
	printf("Enter a number\n");
	scanf("%d",&x);
	Square s=Square(x);
	printf("square of %d is %d",x,s.find_square());
	return 0;
}
