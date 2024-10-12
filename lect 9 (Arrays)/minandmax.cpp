#include<iostream>
#include <limits.h>

using namespace std ;
int getMin(int num[],int n)
{
    int min=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i]<min)
        {
            min=num[i];
        }
    }
    return min;
}
int getMax(int num[],int n)
{
    int max=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i]>max)
        {
            max=num[i];
        }
    }
    return max;
}
int main ()
{
    int size;
    cout<<"Enter a size : ";
    cin>>size;

    int num[100];
    /*for (int i=0; i<size; i++)
    {
        cout<<"Give a number : ";
        cin>>num[i];
    }*/
   
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }
    cout<<endl;
    //Taking output
    cout <<"Minimum value is " << getMin(num,size)<<endl;
    cout <<"Maximum value is " << getMax(num,size)<<endl;
}