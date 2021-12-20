#include <iostream>
using namespace std;
int main(void)
{
int chcount=0;
int wordcount=0;
char ch,word;
cout<<"Enter phrase: ";
while( (ch=getchar()) != '\n') // loop until Enter typed
{
chcount++;
if (ch==' '){
	wordcount++;//count a word
}
 // count a character
} // display results
cout<<endl<<endl <<"Letters : "<<chcount <<endl;
cout<<endl<<endl <<"Words : "<<wordcount+1 <<endl;// wordcount+1 bcz of no space at end/

return 0; }
