#include<iostream>

using namespace std;

int main()
{
    int arr[]={1, 1, 2, 2, 2, 2, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count;
    int x=2;

    for (int i = 0; i < n; i++)
    {
        if (x==arr[i])
        {
           count++;
        }
        
    }
    cout<<count;
    
}