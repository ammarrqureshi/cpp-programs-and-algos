#include <iostream>
using namespace std;
int main()
{
	char alphabet;
	cout<<"Enter The Alphabet: "<<endl;
	cin>>alphabet;
	if (alphabet=='a'||alphabet=='e'||alphabet=='i'||alphabet=='o'||alphabet=='u')
	{
		cout<<alphabet<<" is a vowel.";
	}
	else{
		cout<<alphabet<<" is a consonant";
	}
}
