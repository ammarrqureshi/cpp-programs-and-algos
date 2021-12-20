#include <iostream>
using namespace std;
int main()
{
	int point1= 20, point2=10;
	int *p1, *p2;
	p1= &point1;
	p2=&point2;
	cout<< "Before Swap: *p1="<<*p1<<"*p2="<<*p2<<endl;
	swap(p1,p2);
	cout<<"After Swap: *p1="<<*p1<<"*p2="<<*p2<<endl;
	return 0;
}
