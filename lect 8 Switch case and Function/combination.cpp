#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r)
{
    int num = factorial(n);
    int deno = factorial(n - r) * factorial(r);
    int m=num/deno;
    return m;
}
int main()
{
    int n,r;
    cout << "Enter the value of 'n': ";
    cin >> n;
    cout << "Enter the value of 'r': ";
    cin >> r;
    cout << "nCr= " << nCr(n, r) << endl;

    int c, d;
    cout << "Enter the value of 'c': ";
    cin >> c;
    cout << "Enter the value of 'd': ";
    cin >> d;
    cout << "cCd= " << nCr(c,d) << endl;

    return 0;
}
