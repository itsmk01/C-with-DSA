#include <iostream>
using namespace std;
int main()
{
    /* int a;
     a = cin.get();
     cout << "Value of a is : " << a << endl;*/

    char ch;
    
    cout << "Enter a value : ";
    cin >> ch;
    if ('a' <= ch && ch <= 'z')
    {
        cout << "LOWERCASE" << endl;
    }
    else if ('A' <= ch && ch <= 'Z')
    {
        cout << "UPPERCASE";
    }
    else if('0' <= ch && ch <= '9')
    {
        cout << "Numeric";
    }

    return 0;
}

