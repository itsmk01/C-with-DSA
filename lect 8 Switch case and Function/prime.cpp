#include<iostream>
using namespace std ;
int isPrime (int n){
    for(int i=2; i<n ; i++ ){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int n;
    cout <<"Enter a no. ";
    cin>>n;
    if (isPrime(n)){
        cout <<"It is a prime ."<<endl;
    }
    else{
        cout<<"It is not prime ."<<endl;
    }
}