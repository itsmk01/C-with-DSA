/*
D 
C D 
B C D 
A B C D 
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        char value='A'+n-i;
        while(j<=i)
        {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
}