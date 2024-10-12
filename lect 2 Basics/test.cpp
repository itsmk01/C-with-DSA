#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;
    int i = 2;
    int test = 0;
    while (i <= n)
    {
        int j = 2;

        while (j < i)
        {

            if (i % j != 0)
            {
                j = j + 1;
            }
            else
            {
                test = 1;
                break;
            }
        }
        if (test == 1)
        {
            // cout<<i<<" ";
            /* code */
        }
        else
        {

            cout << i << " ";
        }
        i++;

        test = 0;
    }

    return 0;
}