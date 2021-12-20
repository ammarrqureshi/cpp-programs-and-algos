#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
	int x1,y1,z1;
	int x2,y2,z2;
	cout<<"Input 3d coordinates of Point 1: "<<endl;
	cin>>x1>>y1>>z1;
	cout<<"Input 3d coordinates of Point 2: "<<endl;
	cin>>x2>>y2>>z2;
	int distance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));
	cout<<setw(20)<<"Distance:  "<<setw(10)<<distance;
	
	

}
