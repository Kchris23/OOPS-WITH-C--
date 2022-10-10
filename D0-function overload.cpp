#include<iostream>
#include<conio.h>
using namespace std;
class j
{
	public:
	f(int x)
	{
		cout<<x<<endl;
	}
	f(double x)
	{
		cout<<x<<endl;
	}
	f(int x, int y)
	{
		cout<<x,y<<endl;
	}
};
int main()
{
	j s;
	
	s.f(12.323);
	s.f(12);
	s.f(12,44);
	return 0;
}
