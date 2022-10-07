#include<iostream>
#include<conio.h>
using namespace std;
class income
{
	int sal,t;
	public:
		income()
		{
		}
	tax()
	{
		cout<<"Enter the salary";
		cin>>sal;
		if(sal<=150000)
		{
			t=0;
		}
		else if(sal<=300000)
		{
			t=(sal-150000)*10/100;
		}
		else if(sal<=500000)
		{
			t=150000*10/100+(sal-300000)*20/100;and smaller than a 500000
		}
		else
		{
			t=150000*10/100+200000*20/100+(sal-500000)*30/100;
		}
	}
	display()
	{
		cout<<"The tax for your salary"<<sal<<"-s-"<<t<<endl;
	}
};
int main()
	{
		income s1,s2;
		s1.tax();
		s1.display();
		s2.tax();
		s2.display();
		return 0;
	}
