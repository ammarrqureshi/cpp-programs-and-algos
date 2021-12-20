#include <iostream>
using namespace std;

int main(){
	float temperature;
	cout<<"Enter the temperature: "<<endl;
	cin>>temperature;
	while(temperature<=102.5){
			cout<<"Temperature is alright!"<<endl;
			cout<<"Check after 15 minutes"<<endl;
			cout<<"Waiting.... 15 minutes"<<endl;
			cout<<"Enter temperature agian:"<<endl;
			cin>>temperature;
		
	}

		
			
		while(temperature>102.5){
			cout<<"Turn Down Thermostat"<<endl;
			cout<<"wait 5 minutes"<<endl;
			cout<<"Again Check temperature"<<endl;
			cout<<"Enter temperature again: "<<endl;
			cin>>temperature;
			
		}
		
	}

