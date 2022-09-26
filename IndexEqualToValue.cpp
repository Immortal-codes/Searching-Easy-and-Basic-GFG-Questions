#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   int arr[] = {15, 2, 45, 12, 7};
   int n = sizeof(arr)/sizeof(arr[1]);
    int i;
    

    for (i = 0; i<n; i++)
    {
        
        if (i+1==arr[i])
        {
            cout<<arr[i]<<endl<<i+1;
            break;
        }
    }
}
