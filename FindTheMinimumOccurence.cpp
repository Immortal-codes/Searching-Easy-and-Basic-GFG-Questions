#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{

    int arr[] = {1, 1, 2, 2, 3, 3, 4,50, 50, 65, 65};
    int n=sizeof(arr)/sizeof(arr[0]);
    ;
    for(int i=0;i<n;i+=2)
        {
            if(arr[i]!=arr[i+1])
            {
                cout<<arr[i];
                break;
                
            }
        }
        
    }
    
