#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]= { 1, 3, 4, 3 };
    int x=3;
    int i;
    for ( i = 0; i < 4; i++)
    {
        if (x==arr[i])
        {
            cout<<i<<" ";
        }
        
    }
    
}