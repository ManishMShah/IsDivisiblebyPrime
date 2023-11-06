#include <iostream>
using namespace std;
int n;
bool divisible = false;
int main()
{
    cout << "Enter and integer" << endl;
    cin >> n;
        
    if (n%2 == 0 and n%11 == 0)
    {
        cout << "Eleven" << endl;
    }
    else if (n%3 == 0 and n%11 == 0)
    {
        cout << "Eleven" << endl;
    }
    else if (n%2 == 0 and n%3 == 0)
    {
        cout << "Three" << endl;
    }
    else if (n%2 == 0)
    {
        cout << "Two" << endl;
    }
    else if (n%3 == 0)
    {
        cout << "Three" << endl;
    }
    else if (n%11 == 0)
    {
        cout << "Eleven" << endl;
    }
    else        
    {
        cout << "-1" << endl;
        divisible = true;
    }
    return 0;
}