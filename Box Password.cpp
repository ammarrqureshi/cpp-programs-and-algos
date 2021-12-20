/// C++ Program to change Passwords of Random Mystery boxes
#include<iostream>
#include<cstdlib>
using namespace std;

bool changePwd(int index, string box[]){
	string password, password1;
	cout<<"Password length should be minimum 4 characters"<<endl<<endl;
	
	cout<<"Enter new Password : ";
	cin>>password;
	cout<<"Enter again for Conformation : ";
	cin>>password1;
	if(password==password1){
		box[index] = password;
		return true;
	}
	return false;
}
int main(){
	bool is_exit = false;
	int dice_roll, choice;
	string password;
	string box[6]={ "0055","0808","9090","0077","1001","8800" }; /// Box Passwords according to array indexes
	
    while(!is_exit){
    cout<<"Enter the choice:  "<<endl;
	cout<<"Roll dice (Enter 1): \nExit (Enter 2): \n\ ";
    cin>>choice;
    switch(choice){
    	case 1:
    		if(choice==1){
    			line:
    	         dice_roll = (rand()%6 + 1);// Function to generate random number 1 to 6
    	         cout<<"Box Number : "<<dice_roll;
    	         cout<<"\n\nEnter the Jewellery Box No. "<<dice_roll<<" Password: "<<" : ";
    	         cin>>password;
             	if(password==box[dice_roll-1]){
    	        	if(changePwd(dice_roll-1, box)){
    		    	cout<<"Password Changed"<<endl;
		        	}
	        	}
	        }else{
	      break;
	    default:
			is_exit = true;
	    	break;

	}
}
    


}
}
