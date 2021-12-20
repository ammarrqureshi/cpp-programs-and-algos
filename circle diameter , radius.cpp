#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double radius, diameter, circumfrence,area;
	const double pi= 3.14159;
	cout<<"Enter radius of a Circle: "<<endl;
	cin>>radius;
	diameter= 2*radius;
	circumfrence= 2*pi*radius;
	area= pi*radius*radius;
	cout<<setw(20)<<"Diameter: "<<setw(10)<<diameter<<endl;
	cout<<setw(20)<<"Circumference: "<<setw(10)<<circumfrence<<endl;
	cout<<setw(20)<<"Area: "<<setw(10)<<area<<endl;
}
