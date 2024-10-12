#include <iostream>
using namespace std;

int main()
{
    //VARIABLES
    cout << "This is my First Programme.\n";
    int a = 5;
    float b = 4.66;
    int c = 3;
    double d=7.888564567;
    char x = 'x';
    bool correct = true;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << x << endl;
    cout << correct << endl<<endl;
    
    //SIZE OF VARIABLES
    int size_a=sizeof(a);
    int size_b=sizeof(b);
    int size_c=sizeof(c);
    int size_d=sizeof(d);
    int size_x=sizeof(x);
    int size_correct=sizeof(correct);

    cout<<size_a<<endl;
    cout<<size_b<<endl;
    cout<<size_c<<endl;
    cout<<size_d<<endl;
    cout<<size_x<<endl;
    cout<<size_correct<<endl<<endl;
   
    //ARITHMETIC OPERATORS
    float sum=a+b;
    float difference=a-b;
    float product=a*b;
    float divide=a/b;
    float increment=++a;
    float decrement=--a;
    int modulus=a%c;
    

    cout<<sum<<endl;
    cout<<difference<<endl;
    cout<<product<<endl;
    cout<<divide<<endl;
    cout<<increment<<endl;
    cout<<decrement<<endl;
    cout<<modulus<<endl;

    return 0;
}