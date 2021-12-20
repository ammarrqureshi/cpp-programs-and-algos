#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int convertDecimaltoBinary(long long n);
int main()
{
    int n;
	

    cout << "Enter a Decimal number: ";
    cin >>n;
    
   
    cout << "Binary number= " <<convertDecimaltoBinary(n);

    return 0;
}
int convertDecimaltoBinary(long long n)
{
    int BinaryNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        BinaryNumber += remainder*pow(10,i);
        ++i;
    }
    return BinaryNumber;
}
