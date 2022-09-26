#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]= {1 ,2 ,3 ,4, 8};
    int x=2;
    int i;
    for ( i = 0; i < 5; i++)
    {
        if (x==arr[i])
        {
           x=2*arr[i];
        }
        
    }
    cout<<x;
}