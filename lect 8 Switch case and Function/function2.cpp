#include <iostream>
using namespace std;
// Function Defination
int power()
{
    int a, b;
    cout << "Enter a base = ";
    cin >> a;
    cout << "Enter a power = ";
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{

    // Function Call
    int answer = power();
    cout << "answer is " << answer << endl;
    answer = power();
    cout << "answer is " << answer << endl;
    answer = power();
    cout << "answer is " << answer << endl;
}