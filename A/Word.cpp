#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int upperCaseCount = 0;
    string s;
    cin>>s;
    for(auto it = s.begin(); it!= s.end();  ++it){
        if(isupper(*it)){
            upperCaseCount++;
        }else{
            upperCaseCount--;
        }
    }
    if(upperCaseCount>0){
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    
    }else{
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout<<s;
}