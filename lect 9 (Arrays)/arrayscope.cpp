#include<iostream>
using namespace std;
void update(int arr[],int n){
    cout<<"Inside the function"<<endl;
    arr[0]=120;
    for (int i = 0; i < 4; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to main function"<<endl;
}
int main ()
{
    
   int arr[4]={3,4,5,6};
   
   update(arr,4);//'arr' is passing the first address of arr[4]={3,4,5,6} i.e. arr[0]
    for (int i = 0; i < 4; i++)
    {
        cout<< arr[i]<<" ";
    }
}