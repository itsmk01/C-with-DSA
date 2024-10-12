#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number(n): ";
    cin>>n;
    int i=2, sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"The sum of even no. is : "<<sum;
    return 0;
}

