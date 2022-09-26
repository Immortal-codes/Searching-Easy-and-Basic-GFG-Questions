#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 5};

    int a[] = {};
    int n = 5;
    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
        cout << a[i];
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != a[i+1])
        {
            cout << a[i];
        }
        
        
    }
}
