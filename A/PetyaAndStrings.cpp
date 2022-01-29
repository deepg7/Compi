#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    string s1,s2;
    cin>>s1>>s2;
    auto it = s2.begin();
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    for(auto it1 = s1.begin(); it1!= s1.end();  ++it1){
        a=(int)*it1;
        b=(int)*it;
        if(a>b){
            cout<<1;
            return 0;
        }else if(a<b){
            cout<<-1;
            return 0;
        }
        ++it;
    }
    cout<<0;
}