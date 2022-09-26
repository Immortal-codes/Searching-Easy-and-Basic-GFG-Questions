#include<iostream>

using namespace std;

int main()
{
    int arr[]=  {1, 4, 5, 2, 7, 8, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count;
    int x=2,y=10;

    for (int i = 1; i <n; i++)
    {
        if (x==arr[i]||y==arr[i])
        {
          if (y==arr[i])
          {
            count++;
           break;
          }
          
        }
        
    }
    if (count>0)
    {
       cout<<"yes";
    }
    else
    {
        cout<<"No";
    }
    
    
    
}