/*
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
  
    while (i <= n)
    {
        int j = 1;
        int value=i;
        while (j <= i)
        {
            cout << value << " ";//Or (i-j+1)
            value--;
            j++;
        }

        cout << endl;

        i++;
    }
    return 0;
}