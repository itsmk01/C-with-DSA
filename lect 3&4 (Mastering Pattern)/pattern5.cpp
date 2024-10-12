/*
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 
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
            cout<<row<<" ";
            collumn++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}