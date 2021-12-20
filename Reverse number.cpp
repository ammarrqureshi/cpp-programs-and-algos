#include <iostream>
using namespace std;
int ReverseIt(int n);
int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >>n;
	
	
    cout << "Reversed Number = " <<ReverseIt(n);

    return 0;
}
int ReverseIt(int n){
	int reversedNumber = 0, remainder;
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
    
}

