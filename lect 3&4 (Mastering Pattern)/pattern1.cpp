/*@ @ @ @ @ 
  @ @ @ @ @ 
  @ @ @ @ @ 
  @ @ @ @ @ 
  @ @ @ @ @ */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    int row=1;
    cout<<"\nThe Pattern is : "<<endl;
    while(row<=n)
    {
        int collumn=1;
        while(collumn<=n)
        {
            cout<<"@ ";
            collumn=collumn+1;
        }    
        cout<<endl;
        row=row+1;
    }
    cout<<endl;
    return 0;
}