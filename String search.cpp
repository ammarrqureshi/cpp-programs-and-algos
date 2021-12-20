#include <iostream>

using namespace std;

int main()
{
    int temp = 0, count = 0, pos = 0;
    string user_string, w_search;
    cout << "Enter the String: "<<endl ;
    getline(cin, user_string, '\n');
    cout << "Word : "<<endl ;

    cin >> w_search ;
    cout << endl;

    for (int i = 0; i < user_string.length(); i++)
    {
        temp = user_string.find(w_search,pos);
        if (temp != -1)
            {
                count++;
                pos = temp + w_search.length();
            }
    }

    cout << "Total No. of Occurences:  " <<count<<" times" << endl;
}
