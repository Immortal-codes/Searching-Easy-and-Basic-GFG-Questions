#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s="abhasduBAHDHskdhA";
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                s[count++] = s[i];
            }
        }
        if(s[i]>='a' && s[i]<='z'){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                s[count++] = s[i];
            }
        }
    }
    if(count==0){
        cout<<"No Vovel";
    }
    

    
}