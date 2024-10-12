#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    cout<<"AND (a&b) = "<<(a&b)<<endl;
    cout<<"OR (a|b) = "<<(a|b)<<endl;
    cout<<"NOT (a~b) = "<<~a<<endl;
    cout<<"XOR (a^b) = "<<(a^b)<<endl<<endl;

    //RIGHT SHIFT AND LEFT SHIFT
    cout<<"Right shift (17>>1) "<<(17>>1)<<endl;
    cout<<"Right shift (17>>2) "<<(17>>2)<<endl;
    cout<<"Left shift (19<<1) "<<(19<<1)<<endl;
    cout<<"Left shift (21<<2) "<<(21<<2)<<endl<<endl;

    // PRE/POST INCREAMENT OR DECREAMENT
    int i=8;
    cout<<(i++)<<endl;
    //8 , i=9
    cout<<(++i)<<endl;
    //10 , i=10
    cout<<(i--)<<endl;
    //10 , i=9
    cout<<(--i)<<endl;
    //8 , i=8

    //VARIABLE AND SCOPE
    /*
    
    */
    return 0;
}