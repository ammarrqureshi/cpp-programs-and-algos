#include <iostream>
using namespace std;
struct  Length{
		int feet;
		float inches;
		
	};


int main()
{
	
	Length total_area;
	Length width;
	Length length;
	int room_strength;
	
	cout<<"Enter No. of Rooms in the building: "<<endl;
	cin>>room_strength;
	for(int i=1; i<=room_strength; i++){
	
		/////Width of Room
		Length room_area;
		Length room_width;
		Length room_length;
		cout<<"\n-----------------------------";
			cout<<"\n-----------------------------\n";
		
		cout<<"Enter Width of Room No."<<i<<" : "<<endl;
		cout<<"Feets: ";
		cin>>room_width.feet;
		cout<<"Inches: ";
		cin>>room_width.inches;
	
		cout<<room_width.feet<<" feet "<<room_width.inches<< " inches "<<endl;
		////Length of Room
		cout<<"\n";
		cout<<"Enter Length of Room No."<<i<<" : "<<endl;
		cout<<"Feets: ";
		cin>>room_length.feet;
		cout<<"Inches: ";
		cin>>room_length.inches;
	
		cout<<room_length.feet<<" feet "<<room_length.inches<< " inches "<<endl;
	
		
		////Area
		
		room_area.feet = room_width.feet*room_length.feet;
		room_area.inches=room_width.inches*room_length.inches;
		do{
			room_area.feet++;
			room_area.inches-=12;
		}while(room_area.inches>=12);
//			if(room_area.inches>=12){
//			room_area.feet++;
//			room_area.inches-=12;
//		}	
		///Totall Area
		
		total_area.feet +=room_length.feet*room_width.feet;
		total_area.inches+= room_length.inches*room_width.inches;
	
		
		cout<<"\n\n---------------\n";
			
		cout<<"Room No. "<< i <<" Area: "<<endl<<room_area.feet<< " feet "<<room_area.inches<<" inches "<<endl;
		
	}
	do{
			total_area.feet++;
			total_area.inches-=12;
		}while(total_area.inches>=12);
	cout<<"\t\t \n-----------------------------\n";
	cout<<"\t\tTotal Area of Building:   ";
	cout<<total_area.feet<<" feet "<<total_area.inches<<" inches "<<endl;

	
	
	
	
	
}


