#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    bool prime =1;
    for (int i = 2; i < (n-1); i++)
    {
        if(n%i==0)
        {
            prime =0;
            break;
        }
    }
    if (prime ==0)
    {
        cout<<"Not a Prime";
    }
    else{
        cout<<"It is a Prime";
    }
    return 0;
}