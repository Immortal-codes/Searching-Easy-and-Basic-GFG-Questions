#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  string s="01001";
  sort(s.begin(),s.end());
 
  for(int i = s.length(); i >=0; i--)
  {
    if ('1'==s[i])
    {
       cout<<i;
        break;
    }
    
  }
  
}
