/*
    1
   121
  12321
 1234321
123454321
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    { 
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;   
        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        int k=2;
        int value=i;
        while(k<=i)
        {
            cout<<(value-1);
            value--;
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}