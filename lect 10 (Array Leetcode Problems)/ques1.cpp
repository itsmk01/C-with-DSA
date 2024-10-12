//Find the element which is not repeating
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

    int i, j;
    bool found;

    for (i = 0; i < 7; i++)
    {
        found = false;
        for (j = 0; j < 7; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "The element is: " << arr[i] << endl;
            break;
        }
    }

    if (found)
    {
        cout << "No unique element found." << endl;
    }

    return 0;
}
