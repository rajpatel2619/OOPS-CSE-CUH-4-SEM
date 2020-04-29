// programme to read a matrix of size m*n from keyboard and display the same using function..

#include<iostream>
using namespace std;
class matrix
{
	private:
		int a,b,m=0,n=-1;
		int **A;
	public:
		matrix(int x, int y)
		{
			A=new int *[x];
			for(int i=0;i<x;i++)
			{
				A[i]=new int[y];
			}
			a=x-1;
			b=y-1;
		}
		void insertElements(int x)
		{
			if(b==n && a==m)
				return ;
			else if (n==b)
			{
				m++;
				n=0;
			}
			else
			{
				this->n++;
			}
			A[m][n]=x;
		}
		void displaymatrix()
			{
				for(int i=0;i<=a;i++)
				{
					for(int j=0;j<=b;j++)
					{
						printf("%d\t",A[i][j]);
					}
					printf("\n");
				}
			}
};

		int main()
		{
			int x, y, temp;
			printf("Enter the size of the matrix\n");
			scanf("%d%d",&x,&y);
			matrix m(x,y);
			for(int i=0;i<x;i++)
			{
				for(int j=0;j<y;j++)
				{
					printf("Elements left:--%d\n",(x*y)-(j+i*x));
					scanf("%d",&temp);
					m.insertElements(temp);
				}
			}
			m.displaymatrix();
			return 0;

		}
