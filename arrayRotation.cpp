// simple method
#include <iostream>
using namespace std;

// function for rotating the array
void arrayRotation(int arr[], int n, int swapNumber)
{
    int newArray[swapNumber];

    // taking the elements out and storing them in another array
    for (int i = 0; i < swapNumber; i++)
    {
        newArray[i] = arr[i];
    }

    for (int i = 0; i < swapNumber; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }

    for (int i = 0; i < swapNumber; i++)
    {
        for (int j = n - swapNumber; j < n; j++)
        {
            arr[j] = newArray[i];
        }
    }
}

// main function
int main()
{
    int n, swapNumber; // for array limit
    cout << "Enter the limit for the array: ";
    cin >> n;
    int arr[n]; // initiliazing the array
    cout << '\n';

    // taking the user input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter swapping number: ";
    cin >> swapNumber;

    arrayRotation(arr, n, swapNumber); // calling the function and passing the parameters

    return 0;
}