#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   int arr[] ={12, 35, 1, 10, 34, 1};
   int n = sizeof(arr)/sizeof(arr[1]);
    int i;
    
   sort(arr,arr+n);
   cout<<arr[n-2]<<" ";
}