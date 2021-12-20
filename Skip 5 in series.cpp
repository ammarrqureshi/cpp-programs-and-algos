#include <iostream>
using namespace std;
int main()
{
for (int i = 0; i < 10; i++)
{
if (i == 5) continue;
cout << i << " "; //this statement is skipped each time i!=5
}

return 0;
}
