/*
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    int row=1;
    cin>>n;
    while(row<=n)
    {
        int collumn=1;
        while(collumn<=row)
        {
            cout<<collumn<<" ";
            collumn++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}