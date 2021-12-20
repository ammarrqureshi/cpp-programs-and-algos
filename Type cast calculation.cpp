#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,c;
	int sum,product,diff,avrg;
	cout<<"Enter three float numbers: "<<endl;
	cin>>a>>b>>c;
	sum= static_cast<int>(a)+static_cast<int>(b)+static_cast<int>(c);
	diff= static_cast<int>(a)-static_cast<int>(b)-static_cast<int>(c);
	product= static_cast<int>(a)*static_cast<int>(b)*static_cast<int>(c);
	avrg= sum/3;
	cout<<setw(20)<<"Sum:"<<setw(10)<<sum<<endl;
		cout<<setw(20)<<"Difference:"<<setw(10)<<diff<<endl;
			cout<<setw(20)<<"Product:"<<setw(10)<<product<<endl;
				cout<<setw(20)<<"Average:"<<setw(10)<<avrg<<endl;

	
}
