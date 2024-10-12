#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[7] = {0,1,0,0,1,0,1};
    printArray(arr,7);
    cout<<endl<<endl;
    int i=0,j=6;
    while (i<j)
    {
        if (arr[i]==0)
        {
            i++;
        }
        else if (arr[j]==1)
        {
            j--;
        }
        else
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }
    printArray(arr,7);
    
    return 0;
}