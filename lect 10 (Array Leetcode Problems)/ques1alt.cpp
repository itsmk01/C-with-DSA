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
    int arr[7] = {1, 2, 1, 3, 4, 2, 3};
    cout << "Print the array: " << endl;
    printArray(arr, 7);
    cout << endl;
    cout << "Find the element which is not repeating: " << endl;

    int ans = 0;
    for (int i = 0; i < 7; i++)
    {
        ans = ans ^ arr[i];
    }
    cout<<"Answer is "<< ans <<endl<<endl;

    return 0;
}