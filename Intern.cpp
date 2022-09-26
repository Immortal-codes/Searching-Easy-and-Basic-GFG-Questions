#include <iostream>
#include <string>
#include <algorithm>
#include<math.h>

using namespace std;

int main()
{
    int n = 30;
    int k = 3;
    int count=0;
    while(n>=k){
        n=n/k;
        count++;
        
    }
    int ans=pow(k,count);
    cout<<ans;
    
}