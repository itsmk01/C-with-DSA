#include <iostream>
using namespace std ;
int main()
{
    int a,b,choice;
    cout <<"Enter the value of 'a': ";
    cin>>a;
    cout <<"Enter the value of 'b': ";
    cin>>b;
    cout << "Choose your operator:" << endl;
        cout << "Option 1.sum (+)" << endl;
        cout << "Option 2.difference (-)" << endl;
        cout << "Option 3.multiply (*)" << endl;
        cout << "Option 4.divide (/)" << endl;
        cout << "Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout <<"The sum is "<<(a+b)<<endl;
            break;
        case 2:
            cout <<"The difference is "<<(a-b)<<endl;
            break;
        case 3:   
            cout <<"The multiplication is "<<(a*b)<<endl;
            break;
        default:
            cout <<"The quotient is "<<(a/b)<<endl;
            break;
        }
}