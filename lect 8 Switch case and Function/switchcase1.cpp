#include <iostream>
using namespace std;
int main()
{
    int num = 1;
    switch (num)
    {
    // case constant :It only takes int or char and it does not take float or string value.
    case 1:
        cout << "This case 1" << endl;
        break; // If you not put break here than next case will also excute. Break is used to come out from the switch .
        //continue(skip): Use of continue in switch is not valid.
    case 2:
        cout << "This is case 2" << endl;
        break;
    default: // It is not necessory.
        cout << "This is default" << endl;
        break;
    }
    cout << "Hello World" << endl << endl;

    char ch = '1'; 
    char test = 'Prane';
    cout<<test<<endl;

    switch (ch)
    {
    case '1':
        switch (num)
        {
             case 1:
                  cout << "The num is "<<num<<endl;
                  break;
        }
        break;
    case 2:
        cout << "This is case 2" << endl;
        break;
    default: // It is not necessory.
        cout << "This is default" << endl;
        break;
    }
}