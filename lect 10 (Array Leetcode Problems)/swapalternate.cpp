#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void altswap(int arr[], int size)
{
    for (int i = 0; i+1 < size; i+=2)
    {
        swap(arr[i],arr[i+1]);
    }
    
}
int main()
{

    int arr[6] = {5, 8, 3, 1, 6, 7};
    int brr[5] = {1, 2, 3, 4, 5};
    cout << "Print the original array :" << endl;
    printArray(arr, 6);
    printArray(brr, 5);

    altswap(arr, 6);
    altswap(brr, 5);
    cout << "Print the array after alternate swapping :" << endl;
    printArray(arr, 6);
    printArray(brr, 5);
    return 0;
}