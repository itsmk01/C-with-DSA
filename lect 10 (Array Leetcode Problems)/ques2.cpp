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
    int arr[10] = {1, 2, 3, 4, 4, 4, 2, 3, 4, 3};
    cout << "Print the array: " << endl;
    printArray(arr, 10);
    cout << endl;

    int i, j;
    bool found;

    for (i = 0; i < 10; i++)
    {
        int count=1;
        int brr[100];
        for (j = 0; j < 10; j++)
        {
            
            if (i != j && arr[i] == arr[j])
            {
                count++;
            }
        }
        
        
        brr[i]=count;
        cout<<brr[i]<<endl;
        
        
    }

    

    return 0;
}