#include<iostream>

using namespace std;

int main()
{
    int arr[]= {9, 7, 2, 16, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count;
    int x=16;

    for (int i = 1; i <n; i++)
    {
        if (x==arr[i])
        {
           cout<<i;
           break;
        }
        
    }
    
    
}