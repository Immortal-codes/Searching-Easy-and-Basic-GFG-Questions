#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr) / sizeof(arr[1]);
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        int l = i + 1;
        int r = n - 1;
        int x = arr[i];
        while (l < r)
        {
            if (x + arr[l] + arr[r] == 0)
            {
                cout << "true";
                break;
            }
            else if (x + arr[l] + arr[r] < 0)
                l++;
            else
                r--;
        }
    }
    cout << "false";
}