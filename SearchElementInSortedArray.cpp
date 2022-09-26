#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int k = 7;
    int count = 0;
    for (int i = 0; i <= 5; i++)
    {
        if (k == arr[i])
        {
            count++;
            break;
        }
        
    }
    if (count > 0)
    {
        cout << "1";
    }
    else
    {
        cout << "-1";
    }
}