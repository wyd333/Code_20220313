#include<iostream>
#include<cmath>
using namespace std;

double max(double x,double y)
{
	if(x>y)
		return x;
	else
		return y;
}

int main()
{
	double a,b,c;
	cout << "please input two numbers:>";
	cin >> a >> b;
	c = max(a,b);
	cout << "the squart of maximum =" << sqrt(c);
}
