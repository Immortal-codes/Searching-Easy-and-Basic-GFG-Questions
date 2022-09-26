#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int arr[] = {1,2,3,4,5};
   int n = sizeof(arr)/sizeof(arr[1]);
    int x=5;
    
   for (int i = 0; i < n; i++)
   {
      if (x==arr[i])
      {
        cout<<i;
        break;
      }
      


   }
   
}