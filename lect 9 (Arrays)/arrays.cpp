#include <iostream>
using namespace std;
int main()
{
    int num[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }
    cout << sizeof(num)<<endl;
    int length=sizeof(num)/sizeof(int);
    cout<<length<<endl;
    for (int i = 0; i < length; i++)
    {
        cout << num[i] << endl;
    }
    return 0;
}