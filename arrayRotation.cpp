#include <iostream>
using namespace std;

// function for rotating the array
void arrayRotation(int arr[]){

}

int main()
{
    int n;
    cout << "Enter the limit for the array: ";
    cin >> n;
    int arr[n];
    cout << '\n';

    // taking the user input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arrayRotation(arr);
    
    return 0;
}