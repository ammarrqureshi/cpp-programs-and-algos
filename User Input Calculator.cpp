//// Calculate user input
#include <iostream> 
using namespace std;
 
bool is_operand(char c) { return (c >= '0' && c <= '9'); } 
float value(char c) {  return (c - '0'); } 
  
float calculate(char *expression) 
{ 
    if (*expression== '\0')  return -1; 
    float answer = value(expression[0]); 
  
    for (int i = 1; expression[i]; i += 2) 
    { 
        char oprator = expression[i], opd = expression[i+1]; 
        if (!is_operand(opd))  return -1; 
  
      
        if (oprator == '+')       answer += value(opd); 
        else if (oprator == '-')  answer -= value(opd); 
        else if (oprator == '*')  answer *= value(opd); 
        else if (oprator == '/')  answer /= value(opd); 
  
 
        else                  return -1; 
    } 
    return answer; 
} 

int main() 
{ 
char choice;
char user_input[100]; 
	do{
		
		
    	cout<<"\n\n\t\t\t------------------------------------\n\n ";
    	cout<<"\t\t\tEnter the Calculation to be Performed: "<<endl;
    	cout<<"\t\t\t"<<endl;
    	cin.get(user_input, 100);
    	double answer = calculate(user_input); 
    	(answer == -1)? cout << user_input << " is " << "Invalid\n": 
                 cout << "\t\t\t"<<"Value of " << user_input << " is " << answer << endl; 
       cout<<"\t\t\t \n\n------------------------------------\n\n ";
        cout<<"\t\t\t-->Do you want to do more calculation (y / n)?"; 
        cin>>choice;
	}while(choice =='Y'|| choice=='y');
	cout<<"\n\n\t\t\t...Thanks..."<<endl;
	
     return 0;
    
}
