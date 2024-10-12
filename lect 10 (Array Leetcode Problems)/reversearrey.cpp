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
void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{

    int arr[6] = {5, 8, 3, 1, 6, 7};
    int brr[5] = {1, 2, 3, 4, 5};
    cout << "Print the original array :" << endl;
    printArray(arr, 6);
    printArray(brr, 5);

    reverse(arr, 6);
    reverse(brr, 5);
    cout << "Print the reversed array :" << endl;
    printArray(arr, 6);
    printArray(brr, 5);
    return 0;
}