#include <iostream>
#include <algorithm>
using namespace std;

int insert(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "enter the elemetn ";
        cin >> arr[i];
      
    }
    return 0;
}

int search(int arr[], int key, int n)
{

    int low = 0;
    int high = n - 1;
   

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr[mid])
        {
            cout << "Key is found and indes is : " << mid << endl;
            return 0;
        }
        if (key > arr[mid])
        {
            low = mid + 1;
        }
        if (key < arr[mid])
        {
            high = mid - 1;
        }
    }
    return 0;
    
}

int main()
{
    int n;
    int key;
    cout << "Enter the size of array : and key";
    cin >> n >> key;
    int arr[n];
    insert(arr, n);
    sort(arr, arr + n);

    search(arr, key, n);
    return 0;
}